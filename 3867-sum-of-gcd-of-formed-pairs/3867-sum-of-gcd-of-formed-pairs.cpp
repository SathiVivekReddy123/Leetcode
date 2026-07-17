class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>pr(n);
        pr[0]=nums[0];
        for(int i=1;i<n;i++){
            pr[i]=max(pr[i-1],nums[i]);
        }
        for(int i=0;i<n;i++) pr[i]=gcd(nums[i],pr[i]);
        sort(pr.begin(),pr.end());
        int l=0,r=n-1;
        long long sum=0;
        while(l<r){
            sum+=gcd(pr[l],pr[r]);
            l++;
            r--;
        }
        return sum;
    }
};