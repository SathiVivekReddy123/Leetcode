class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        int mn=INT_MAX,sum=0;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]].push_back(i);
        for(auto &it:mp){
            if(it.second.size()>=3){
                int r=2,n=it.second.size();
                while(r<n){
                sum=abs(it.second[r-2]-it.second[r-1])+abs(it.second[r-1]-it.second[r])+abs(it.second[r]-it.second[r-2]);
                mn=min(mn,sum);
                r++;
                }
            }
        }
        if(mn==INT_MAX) return -1;
        return mn;
    }
};