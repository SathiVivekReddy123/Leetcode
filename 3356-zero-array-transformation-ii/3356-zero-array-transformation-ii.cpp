class Solution {
public:
bool check(vector<int>&nums,vector<vector<int>>&queries,int k){
    int n=nums.size();
    vector<int>temp(n+1),ps(n);
    for(int i=0;i<=k;i++){
        temp[queries[i][0]]+=queries[i][2];
        temp[queries[i][1]+1]-=queries[i][2];
    }
    if(temp[0]<nums[0]) return 0;
    ps[0]=temp[0];
    for(int i=1;i<n;i++){
        if(ps[i-1]+temp[i]<nums[i]) return 0;
        ps[i]=ps[i-1]+temp[i];
    }
    return 1;
}
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size(),cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) cnt++;
        }
        if(n==cnt) return 0;
        int l=0,h=queries.size()-1,res=-1;
        while(l<=h){
            int m=(l+h)/2;
            if(check(nums,queries,m)){
                h=m-1;
                res=m;
            }
            else{
                l=m+1;
            }
        }
        if(res==-1) return res;
        return res+1;
    }
};