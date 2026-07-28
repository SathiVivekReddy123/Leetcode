class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ps(n),ss(n);
        ps[0]=nums[0];
        ss[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            ps[i]=min(ps[i-1],nums[i]);
            ss[n-i-1]=max(ss[n-i],nums[n-i-1]);
        }
        int mx=-1;
        for(int i=0;i<n-1;i++){
            if(ss[i+1]>ps[i]) mx=max(mx,ss[i+1]-ps[i]);
        }
        return mx;
    }
};