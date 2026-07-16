class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size(),l=0,r=0;
        while(r<n){
            if(r-l+1==2*k){
                reverse(s.begin()+l,s.begin()+l+k);
                l=r+1;
            }
            if(r==n-1){
                if(r-l+1>=k) reverse(s.begin()+l,s.begin()+l+k);
                else reverse(s.begin()+l,s.end());
            }
            r++;
        }
        return s;
    }
};