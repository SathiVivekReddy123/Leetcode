class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        int res=-1;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        if(k==1){
            for(auto it:mp){
                if(it.second==1) res=it.first;
            }
            return res;
        }
        if(n-1>=k){
            mp[nums[0]]--;
            if(mp[nums[0]]==0) res=max(res,nums[0]);
            mp[nums[0]]++;
            mp[nums[n-1]]--;
            if(mp[nums[n-1]]==0) res=max(res,nums[n-1]);
        }
        else return *max_element(nums.begin(),nums.end());
        return res;
    }
};