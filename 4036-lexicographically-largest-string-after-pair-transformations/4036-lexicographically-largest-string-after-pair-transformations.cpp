class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string>res;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            string temp="";
            while(nums[i]>0){
                if(nums[i]&1){
                    if(cnt<=25) temp=(char)('a'+cnt)+temp;
                    else temp="zz"+temp;
                }
                cnt++;
                nums[i]>>=1;
            }
            res.push_back(temp);
        }
        return res;
    }
};