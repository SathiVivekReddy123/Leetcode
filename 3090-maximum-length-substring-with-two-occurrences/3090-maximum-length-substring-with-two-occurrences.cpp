class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0,r=0,n=s.size(),mx=0;
        unordered_map<char,int>mp;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                l++;
            }
            mx=max(r-l+1,mx);
            r++;
        }
        return mx;
    }
};