class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int high=0,low=0,n=weights.size(),res=0;
        for(int i=0;i<n;i++){
            low=max(low,weights[i]);
            high+=weights[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0,d=0;
            for(int i=0;i<n;i++){
                sum+=weights[i];
                if(sum>mid){
                    d++;
                    sum=weights[i];
                }
            }
            if(d+1<=days){
                high=mid-1;
                res=mid;
            }
            else low=mid+1;
        }
        return res;
    }
};