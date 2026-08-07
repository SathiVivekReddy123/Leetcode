class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        int n=s.size(),mx=0;
        string temp="";
        for(int i=0;i<dictionary.size();i++){
            int l=0,r=0,len=dictionary[i].size();
            if(len<mx) continue;
            while(l<n && r<len){
                if(s[l]==dictionary[i][r]){
                    r++;
                }
                l++;
            }
            if(r==len){
                if(len>temp.size()){
                    mx=len;
                    temp=dictionary[i];
                }
                else temp=min(temp,dictionary[i]);
            }
        }
        return temp;
    }
};