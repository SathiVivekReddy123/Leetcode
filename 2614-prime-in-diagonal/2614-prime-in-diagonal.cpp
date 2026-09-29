class Solution {
public:
bool isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size(),res=0;
        for(int i=0;i<n;i++){
            if(isPrime(nums[i][i])) res=max(res,nums[i][i]);
            if(isPrime(nums[i][n-i-1])) res=max(res,nums[i][n-i-1]);
        }
        return res;
    }
};