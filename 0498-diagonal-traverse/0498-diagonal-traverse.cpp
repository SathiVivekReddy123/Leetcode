class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>>arr(m+n-1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            if(i%2==0){
                reverse(arr[i].begin(),arr[i].end());
            }
            res.insert(res.end(),arr[i].begin(),arr[i].end());
        }
        return res;
    }
};