class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res=0;
        for(int i:nums) res^=i;
        unsigned int lsb = (unsigned int)res & (-(unsigned int)res);
        int a=0,b=0;
        for(int i:nums){
            if(i & lsb) a^=i;
            else b^=i;
        }
        return {a,b};
    }
};