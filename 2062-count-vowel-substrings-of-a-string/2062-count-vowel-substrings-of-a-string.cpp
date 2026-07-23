class Solution {
public:
    int countVowelSubstrings(string word) {
        int cnt=0,n=word.size();
        for(int i=0;i<n;i++){
            unordered_map<char,int>mp;
            if(word[i]!='a' && word[i]!='e' &&word[i]!='i' &&word[i]!='o' &&word[i]!='u')
                continue;
            else mp[word[i]]++;
            for(int j=i+1;j<n;j++){
                if(word[j]!='a' && word[j]!='e' &&word[j]!='i' &&word[j]!='o' &&word[j]!='u')
                     break;
                else mp[word[j]]++;
                if(mp.size()==5) cnt++;
            }
        }
        return cnt;
    }
};