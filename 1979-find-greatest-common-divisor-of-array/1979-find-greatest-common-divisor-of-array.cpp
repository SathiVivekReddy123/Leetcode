class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end()),min=*min_element(nums.begin(),nums.end());
        int f;
        for(int i=1;i<=min;i++){
            if(max%i==0 && min%i==0) f=i;
        }
        return f;
    }
};