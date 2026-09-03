class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int ec=0,oc=0,em=INT_MAX,om=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0){
                ec++;
                em=min(em,nums1[i]);
            }
            else{
                oc++;
                om=min(om,nums1[i]);
            }
        }
        if(oc==0 || ec==0) return true;
        if(em>om) return true;
        return false;
    }
};