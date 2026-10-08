class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>r;
        vector<int>ps(n);
        ps[0]=arr[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]^arr[i];
        }
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]==0) r.push_back(ps[queries[i][1]]);
            else{
                r.push_back(ps[queries[i][1]]^ps[queries[i][0]-1]);
            }
        }
        return r;
    }
};