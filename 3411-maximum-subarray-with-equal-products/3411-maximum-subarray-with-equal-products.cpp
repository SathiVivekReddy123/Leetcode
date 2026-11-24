class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int res=1;
        for(int i=0;i<n;i++){
            long long g=0,l=1,pr=1;
            for(int j=i;j<n;j++){
                g=gcd(g,nums[j]);
                l=l/gcd(l,nums[j])*nums[j];
                if(pr>LLONG_MAX/nums[j])
                break;
                pr*=nums[j];
                if(pr==1LL*l*g) res=max(res,j-i+1);
            }
        }
        return res;
    }
};