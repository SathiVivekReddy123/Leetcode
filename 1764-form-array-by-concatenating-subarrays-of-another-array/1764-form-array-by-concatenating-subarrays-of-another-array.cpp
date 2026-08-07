class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        int n=nums.size(),l=0,i=0,m=groups.size();
        while(i<m && l<n){
            int s=groups[i].size();
        if(nums[l]==groups[i][0] && (l+s-1)<n && equal(groups[i].begin(),groups[i].end(),nums.begin()+l)){
            i++;
            l+=s;
        }
        else l++;
        }
        if(i==m) return 1;
        return 0;
    }
};