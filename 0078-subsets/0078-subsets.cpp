class Solution {
public:
void solve(vector<vector<int>>&res,vector<int>&nums,vector<int>&temp,int idx,int n){
    if(idx==n){
        res.push_back(temp);
        return;
    }
    solve(res,nums,temp,idx+1,n);
    temp.push_back(nums[idx]);
    solve(res,nums,temp,idx+1,n);
    temp.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        solve(res,nums,temp,0,nums.size());
        return res;
    }
};