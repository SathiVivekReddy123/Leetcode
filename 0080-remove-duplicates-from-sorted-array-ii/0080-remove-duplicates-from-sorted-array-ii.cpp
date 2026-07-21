class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1,i=0,k=0;
        nums[k++]=nums[i++];
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                if(count<2){
                    nums[k++]=nums[i++];
                }
                else{
                    i++;
                }
                count++;
            }else{
                nums[k++]=nums[i++];
                count=1;
            }
        }
        return k;
    }
};