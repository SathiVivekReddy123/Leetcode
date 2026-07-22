class Solution {
public:
int sum(int num){
    int s=0;
    while(num>0){
        s+=num%10;
        num/=10;
    }
    return s;
}
    int maximumSum(vector<int>& nums) {
        int mx=-1;
        sort(nums.begin(),nums.end());
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[sum(nums[i])].push_back(nums[i]);
        }
        for(auto &it:mp){
            if(it.second.size()>=2){
                int n=it.second.size();
                mx=max(it.second[n-1]+it.second[n-2],mx);
            }
        }
        return mx;
    }
};