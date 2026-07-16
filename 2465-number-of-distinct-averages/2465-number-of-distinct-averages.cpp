class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double>s;
        sort(nums.begin(),nums.end());
        int n=nums.size(),l=0,r=n-1;
        while(l<r){
            double avg=(nums[l]+nums[r])/2.0;
            s.insert(avg);
            l++;
            r--;
        }
        return s.size();
    }
};