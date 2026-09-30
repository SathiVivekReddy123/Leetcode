class Solution {
public:
int solve(vector<int>&nums,int res,int idx){
    if(idx==nums.size()){
        return res;
    }
    int a=solve(nums,nums[idx]^res,idx+1);
    int b=solve(nums,res,idx+1);
    return a+b;
}
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        return solve(nums,res,0);
    }
};