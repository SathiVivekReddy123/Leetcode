class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),mid=(n-1)/2,l=0,r=n-1;
        vector<int>res;
        while(k>0){
            if(abs(arr[l]-arr[mid])==abs(arr[r]-arr[mid])){
                res.push_back(arr[r]);
                r--;
            }
            else if(abs(arr[l]-arr[mid])>abs(arr[r]-arr[mid])){
                res.push_back(arr[l]);
                l++;
            }
            else{
                res.push_back(arr[r]);
                r--;
            }
            k--;
        }
        return res;
    }
};