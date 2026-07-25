class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n),suffix(n);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],nums[i]);
            suffix[n-i-1]=min(suffix[n-i],nums[n-i-1]);
        }
        for(int i=0;i<n-1;i++){
            if(suffix[i+1]>=prefix[i]) return i+1;
        }
        return n;
    }
};