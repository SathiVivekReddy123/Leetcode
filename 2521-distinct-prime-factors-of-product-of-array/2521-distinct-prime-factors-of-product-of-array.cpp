class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int n=nums.size();
        vector<int>prime(1000);
        for(int i=0;i<1000;i++) prime[i]=i+1;
        for(int i=1;i<1000;i++){
            if(prime[i]==i+1){
                for(int j=(2*prime[i])-1;j<1000;j+=prime[i]){
                    if(prime[j]==j+1) prime[j]=prime[i];
                }
            }
        }
        unordered_set<long long>s;
        for(int i=0;i<n;i++){
        while(nums[i]>1){
            s.insert(prime[nums[i]-1]);
            nums[i]/=prime[nums[i]-1];
        }
        }
        return s.size();
    }
};