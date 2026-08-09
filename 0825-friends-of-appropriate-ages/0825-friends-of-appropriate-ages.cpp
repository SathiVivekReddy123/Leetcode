class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int n=ages.size(),l=n-2,r=n-1;
        long long res=0;
        if(n==1) return 0;
        sort(ages.begin(),ages.end());
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) mp[ages[i]]++;
        for(auto &it:mp){
            if(it.first>14)
            res+=1LL*it.second*(it.second-1)/2;
        }
        while(l<r && r>0){
            if(l<0 && ages[0]>(0.5*ages[r])+7){
                res+=r;
                r--;
            }
            else if(ages[l]>(0.5*ages[r])+7){
                l--;
            }
            else{
                res+=r-l-1;
                r--;
            }
            if(l==r) l--;
        }
        return res;
    }
};