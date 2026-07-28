class Solution {
public:
    string smallestPalindrome(string s) {
       vector<int>freq(26);
       int n=s.size();
       for(int i=0;i<n;i++) freq[s[i]-'a']++;
       int l=0,r=n-1;
       for(int i=0;i<26;i++){
        if(freq[i]==0) continue;
        for(int j=0;j<freq[i]/2;j++){
            s[l++]='a'+i;
            s[r--]='a'+i;
        }
        if(freq[i]%2!=0) s[n/2]='a'+i;
       }
       return s;
    }
};