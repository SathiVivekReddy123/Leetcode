class Solution {
public:
    int magicalString(int n) {
        string s="12211";
        int cnt=0;
        if(n<=s.size()){
            for(int i=0;i<n;i++){
                if(s[i]=='1') cnt++;
            }
            return cnt;
        }
        int l=3,f=0;
        cnt=1;
        while(l<n){
            if(s[l]=='1') cnt++;
            if(f){
                s.append(s[l]-'0','1');
                f=0;
            }
            else{
                s.append(s[l]-'0','2');
                f=1;
            }
            l++;
        }
        return cnt;
    }
};