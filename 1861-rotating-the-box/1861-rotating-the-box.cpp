class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size(),n=boxGrid[0].size();
        vector<vector<char>>res(n,vector<char>(m,'.'));
        for(int i=m-1;i>=0;i--){
            int c1=0,ind=n;
            for(int j=n-1;j>=0;j--){
                if(boxGrid[i][j]=='#') c1++;
                else if(boxGrid[i][j]=='*'){
                    res[j][m-i-1]='*';
                    int l=ind-1;
                    while(c1>0){
                        res[l][m-i-1]='#';
                        l--;
                        c1--;
                    }
                    ind=j;
                }
            }
            int l=ind-1;
            while(c1>0){
                res[l][m-i-1]='#';
                l--;
                c1--;
            }
        }
        return res;
    }
};