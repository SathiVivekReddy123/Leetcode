class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int res=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>1;i--){
            int k=i-1,j=0;
            while(j<k){
                if(nums[j]+nums[k]>nums[i]){
                    res+=k-j;
                    k--;
                }
                else j++;
            }
        }
        return res;
    }
};