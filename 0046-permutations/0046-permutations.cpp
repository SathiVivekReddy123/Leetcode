class Solution {
public:
void solve(vector<vector<int>>&res,vector<int>&visited,vector<int>&nums,vector<int>&temp,int n){
    if(temp.size()==n){
        res.push_back(temp);
        return;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            temp.push_back(nums[i]);
            visited[i]=1;
            solve(res,visited,nums,temp,n);
            visited[i]=0;
            temp.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        vector<int>visited(n,0),temp;
        solve(res,visited,nums,temp,n);
        return res;
    }
};