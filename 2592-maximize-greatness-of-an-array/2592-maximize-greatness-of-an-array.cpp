class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0,l=0,r=0,n=nums.size();
        while(l<n && r<n){
            if(nums[l]>nums[r]){
                cnt++;
                l++;
                r++;
            }
            else l++;
        }
        return cnt;
    }
};