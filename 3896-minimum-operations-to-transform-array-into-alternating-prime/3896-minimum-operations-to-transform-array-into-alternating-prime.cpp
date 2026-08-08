class Solution {
public:
bool isprime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int nextprime(int n){
    int org=n;
    while(!isprime(n))
        n++;
    return n-org;
}
    int minOperations(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0) res+=nextprime(nums[i]);
            else{
                if(isprime(nums[i])){
                    if(nums[i]==2) res+=2;
                    else res++;
                }
            }
        }
        return res;
    }
};