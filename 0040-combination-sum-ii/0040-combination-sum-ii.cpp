class Solution {
public:
void solve(vector<vector<int>>&res,vector<int>&candidates,vector<int>&temp,int sum,int target,int idx){
    if(sum==target){
        res.push_back(temp);
        return;
    }
    if(sum>target) return;
    for(int i=idx;i<candidates.size();i++){
        if(i>idx && candidates[i]==candidates[i-1]) continue;
            sum+=candidates[i];
            temp.push_back(candidates[i]);
            solve(res,candidates,temp,sum,target,i+1);
            sum-=candidates[i];
            temp.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>temp;
        solve(res,candidates,temp,0,target,0);
        return res;
    }
};