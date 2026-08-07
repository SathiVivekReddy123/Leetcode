class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size(),l=0,r=n-1,ind=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(arr[m]<=x){
                ind=m;
                l=m+1;
            }
            else r=m-1;
        }
        vector<int>res;
        l=ind,r=ind+1;
        while(k>0 && l>=0 && r<n){
            if(abs(arr[l]-x)<=abs(arr[r]-x)) res.push_back(arr[l--]);
            else res.push_back(arr[r++]);
            k--;
        }
        if(k==0){
            sort(res.begin(),res.end());
            return res;
        }
        while(l>=0 && k>0){
            res.push_back(arr[l--]);
            k--;
        }
        while(r<n && k>0){
            res.push_back(arr[r++]);
            k--;
        }
        sort(res.begin(),res.end());
        return res;
    }
};