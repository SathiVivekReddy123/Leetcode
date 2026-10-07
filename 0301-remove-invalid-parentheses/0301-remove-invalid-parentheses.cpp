class Solution {
public:
void solve(string& s,int bf,int ind,int rm,string& temp,unordered_set<string>&res,int& mn){
    if(ind>=s.size()){
        if(bf==0){
        if(rm<mn){
        res.insert(temp);
        mn=rm;
        }
        else if(rm==mn){
            res.insert(temp);
        }
        }
        return;
    }
    if(bf<0) return;
    if(s[ind]=='(') bf++;
    else if(s[ind]==')') bf--;
    temp.push_back(s[ind]);
    solve(s,bf,ind+1,rm,temp,res,mn);
    if(s[ind]=='(') bf--;
    else if(s[ind]==')') bf++;
    temp.pop_back();
    solve(s,bf,ind+1,rm+1,temp,res,mn);
}
    vector<string> removeInvalidParentheses(string s) {
        unordered_set<string>res;
        string temp="";
        int mn=INT_MAX;
        solve(s,0,0,0,temp,res,mn);
        vector<string>arr;
        for(auto& it:res){
            arr.push_back(it);
        }
        return arr;
    }
};