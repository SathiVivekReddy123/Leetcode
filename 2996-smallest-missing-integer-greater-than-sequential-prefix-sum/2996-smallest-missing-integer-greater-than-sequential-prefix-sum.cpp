class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int ps=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                ps+=nums[i];
            }
            else break;
        }
        while(s.find(ps)!=s.end()){
            ps++;
        }
        return ps;
    }
};