class Solution {
public:
void solve(vector<string>&res,string& digits,vector<string>&alpha,int idx,string &temp){
    if(idx==digits.size()){
        res.push_back(temp);
        return;
    }
    for(int i=0;i<alpha[(digits[idx]-'0')-2].size();i++){
        temp.push_back(alpha[(digits[idx]-'0')-2][i]);
        solve(res,digits,alpha,idx+1,temp);
        temp.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string>alpha={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>res;
        string temp="";
        solve(res,digits,alpha,0,temp);
        return res;
    }
};