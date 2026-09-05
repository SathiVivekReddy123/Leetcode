class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>p(n),s(n);
        p[0]=nums[0];
        s[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            p[i]=max(nums[i],p[i-1]);
            s[n-i-1]=min(nums[n-i-1],s[n-i]);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(p[i]-s[i]<=k) return i;
        }
        return -1;
    }
};