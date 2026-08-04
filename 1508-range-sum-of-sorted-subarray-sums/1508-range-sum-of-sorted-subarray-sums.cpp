class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long>sub;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                sub.push_back(sum);
            }
        }
        sort(sub.begin(),sub.end());
        long long res=0;
        for(int i=left-1;i<right;i++) res+=(sub[i]%(1000000000+7));
        return res%(1000000000+7);
    }
};