class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums){
        int n=nums.size();
        vector<int>ps(n),res;
        ps[0]=nums[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
        }
        int p=0,a=0;
        for(int i=0;i<n;i++){
            if(i>0) p=(i*nums[i])-ps[i-1];
            a=ps[n-1]-ps[i]-(nums[i]*(n-i-1));
            res.push_back(p+a);
        }
        return res;
    }
};