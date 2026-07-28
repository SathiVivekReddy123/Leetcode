class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>temp(n+1),ps(n);
        for(int i=0;i<queries.size();i++){
            temp[queries[i][0]]++;
            temp[queries[i][1]+1]--;
        }
        ps[0]=temp[0];
        for(int i=1;i<n;i++) ps[i]=temp[i]+ps[i-1];
        for(int i=0;i<n;i++){
            if(ps[i]<nums[i]) return false;
        }
        return true;
    }
};