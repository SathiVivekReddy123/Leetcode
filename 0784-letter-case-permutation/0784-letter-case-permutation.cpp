class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>res;
        res.push_back(s);
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isalpha(s[i])){
                char c=s[i];
                if(s[i]>='a' && s[i]<='z') c-=32;
                else c+=32;
                int n1=res.size();
            for(int j=0;j<n1;j++){
                string temp=res[j];
                temp[i]=c;
                res.push_back(temp);
            }
            }
        }
        return res;
    }
};