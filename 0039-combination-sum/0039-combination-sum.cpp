class Solution {
public:
void solve(vector<vector<int>>&res,vector<int>&candidates,int target,int sum,int idx,vector<int>&temp){
    if(sum==target){
        res.push_back(temp);
        return;
    }
    if(sum>target) return;
    for(int i=idx;i<candidates.size();i++){
        sum+=candidates[i];
        temp.push_back(candidates[i]);
        solve(res,candidates,target,sum,i,temp);
        sum-=candidates[i];
        temp.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        solve(res,candidates,target,0,0,temp);
        return res;
    }
};