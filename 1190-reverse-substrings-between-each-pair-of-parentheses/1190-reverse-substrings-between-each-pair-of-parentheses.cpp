class Solution {
public:
    string reverseParentheses(string s) {
        string res,temp;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                while(res.back()!='('){
                temp+=res.back();
                res.pop_back();
                }
                res.pop_back();
                res+=temp;
                temp="";
            }
            else res+=s[i];
        }
        return res;
    }
};