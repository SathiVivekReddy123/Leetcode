class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size(),cnt=0,c1=0,c2=0,c3=0,r=0,mx=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt++;
        }
        while(r<n){
            while(r<n && s[r]=='0'){
                c1++;
                r++;
            }
            while(r<n && s[r]=='1'){
                c2++;
                r++;
            }
            while(r<n && s[r]=='0'){
                c3++;
                r++;
            }
            if(c1 && c2 && c3){
                if(c1+c3>mx){
                    mx=c1+c3;
                }
                c1=c3;
                c2=0;
                c3=0;
            }
            else{
                c1=c3;
                c3=0;
                c2=0;
            }
        }
        return cnt+mx;
    }
};