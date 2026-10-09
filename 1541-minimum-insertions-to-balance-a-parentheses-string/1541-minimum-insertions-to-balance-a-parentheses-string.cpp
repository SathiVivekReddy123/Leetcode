class Solution {
public:
    int minInsertions(string s) {
        int cnt=0,res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(cnt<0){
                    res+=(abs(cnt)+1)/2;
                    if(cnt%2!=0) res++;
                    cnt=0;
                }
                else if(cnt%2!=0){
                    res++;
                    cnt--;
                }
                cnt+=2;
            }
            else cnt--;
        }
        if(cnt<0){
            res+=(abs(cnt)+1)/2;
            if(cnt%2!=0) res++;
        }
        else{
            if(cnt%2!=0){
                res++;
                cnt--;
            }
            if(cnt%2==0) res+=cnt;
        }
        return res;
    }
};