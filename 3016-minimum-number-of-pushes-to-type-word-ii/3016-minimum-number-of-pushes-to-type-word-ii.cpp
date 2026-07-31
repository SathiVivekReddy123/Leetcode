class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26);
        for(int i=0;i<word.size();i++) freq[word[i]-'a']++;
        sort(freq.begin(),freq.end());
        int cnt=0,res=0;
        for(int i=25;i>=0;i--){
            if(freq[i]==0) continue;
            else{
                cnt++;
                if(cnt%8==0) res+=(cnt/8)*freq[i];
                else
                res+=((cnt/8)+1)*freq[i];
            }
        }
        return res;
    }
};