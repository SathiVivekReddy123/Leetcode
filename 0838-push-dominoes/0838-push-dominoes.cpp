class Solution {
public:
    string pushDominoes(string dominoes) {
        int n=dominoes.size(),cnt=0;
        bool flag=0;
        vector<int>l(n),r(n);
        for(int i=0;i<n;i++){
            if(dominoes[i]=='L'){
                flag=0;
                cnt=0;
            }
            else if(dominoes[i]=='R'){
                flag=1;
                cnt=1;
            }
            else if(dominoes[i]=='.' && flag) cnt++;
            r[i]=cnt;
        } 
        flag=0;
        cnt=0;
        for(int i=n-1;i>=0;i--){
            if(dominoes[i]=='R'){
                flag=0;
                cnt=0;
            }
            else if(dominoes[i]=='L'){
                flag=1;
                cnt=1;
            }
            else if(dominoes[i]=='.' && flag) cnt++;
            l[i]=cnt;
        } 
        for(int i=0;i<n;i++){
            if(l[i]==r[i]) dominoes[i]='.';
            else if(l[i]>0 && r[i]==0) dominoes[i]='L';
            else if(l[i]==0 && r[i]>0) dominoes[i]='R';
            else if(l[i]>0 && r[i]>0){
                if(l[i]>r[i]) dominoes[i]='R';
                else dominoes[i]='L';
            }
        }
        return dominoes;
    }
};