class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1 || numRows>=n) return s;
        vector<vector<char>>mat(numRows);
        int r=2*(numRows-1);
        for(int i=0;i<n;i++){
            int row=i%r;
            if(row>numRows-1) row=r-row;
            mat[row].push_back(s[i]);
        }
        s="";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<mat[i].size();j++){
                s+=mat[i][j];
            }
        }
        return s;
    }
};