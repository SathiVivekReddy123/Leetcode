class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long l=0,r=0,n=nums.size(),total=0,sum=0,res=n+1;
        for(int i=0;i<n;i++) total+=nums[i];
        while(r<n){
            sum+=nums[r];
            while(l<=r && total-sum<x){
                sum-=nums[l];
                l++;
            }
            if(total-sum==x) res=min(res,n-r+l-1);
            r++;
        }
        if(res==n+1) return -1;
        return res;
    }
};