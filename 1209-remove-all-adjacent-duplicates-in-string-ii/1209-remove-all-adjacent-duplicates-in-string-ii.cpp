class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.size();i++){
            if(!st.empty()){
                if(st.top().first==s[i]){
                auto [p,q]=st.top();
                st.pop();
                if(q+1<k) st.push({p,q+1});
                }
                else st.push({s[i],1});
            }
            else st.push({s[i],1});
        }
        string temp="";
        while(!st.empty()){
            temp.append(st.top().second,st.top().first);
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};