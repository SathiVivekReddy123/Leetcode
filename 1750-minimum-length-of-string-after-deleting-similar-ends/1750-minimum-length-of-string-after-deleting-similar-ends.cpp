class Solution {
public:
    int minimumLength(string s) {
        int n=s.size(),l=0,r=n-1;
        while(l<r){
            if(s[l]==s[r]){
                int a=l,b=r;
                while(l<n && s[l]==s[a]) l++;
                while(r>=0 && s[r]==s[b]) r--;
            }
            else break;
        }
        if(l>r) return 0;
        return r-l+1;
    }
};