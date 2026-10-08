class Solution {
public:
void solve(int& n,int bf,string& temp,vector<string>& res){
    if(temp.size()==2*n){
        if(bf==0) res.push_back(temp);
        return;
    }
    if(bf>n) return;
    else if(bf<0) return;
    temp.push_back('(');
    solve(n,bf+1,temp,res);
    temp.pop_back();
    temp.push_back(')');
    solve(n,bf-1,temp,res);
    temp.pop_back();
}
    vector<string> generateParenthesis(int n) {
        int bf=0;
        vector<string>res;
        string temp="";
        solve(n,bf,temp,res);
        return res;
    }
};