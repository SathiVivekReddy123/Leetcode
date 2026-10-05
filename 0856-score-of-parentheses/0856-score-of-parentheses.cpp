class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(0);
            }
            else{
                int cnt=st.top();
                st.pop();
                if(cnt==0) st.top()++;
                else st.top()+=2*cnt;
            }
        }
        return st.top();
    }
};