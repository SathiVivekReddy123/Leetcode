class Solution {
public:
int search(vector<int>&nums1,int low,int high,int target){
    int ind=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums1[mid]<=target){
            ind=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ind;
}
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int mx=0,n=nums1.size(),m=nums2.size(),l,r;
        for(int i=m-1;i>=0;i--){
            if(i>n-1){
                l=0,r=n-1;   
            }
            else{
                l=0,r=i;
            }
            if(nums2[i]<nums1[r]) continue;
            int ind=search(nums1,l,r,nums2[i]);
            mx=max(mx,i-ind);
        }
        return mx;
    }
};