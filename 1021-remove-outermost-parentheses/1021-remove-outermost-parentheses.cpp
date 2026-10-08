class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string res="";
        for(auto&it:s){
            if(it=='('){
                if(cnt>0) res+=it;
                cnt++;
            }
            else{
                cnt--;
                if(cnt>0) res+=it;
            }
        }
        return res;
    }
};