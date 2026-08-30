class Solution {
public:
    void gameOfLife(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>res(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int cnt=0;
                if(i>0 && j>0 &&grid[i-1][j-1]) cnt++;
                if(i>0 && grid[i-1][j]) cnt++;
                if(i>0 && j<n-1 && grid[i-1][j+1]) cnt++;
                if(j>0 && grid[i][j-1]) cnt++;
                if(j<n-1 && grid[i][j+1]) cnt++;
                if(i<m-1 && j>0 && grid[i+1][j-1]) cnt++;
                if(i<m-1 && grid[i+1][j]) cnt++;
                if(i<m-1 && j<n-1 && grid[i+1][j+1]) cnt++;
                if(grid[i][j]){
                    if(cnt==2 || cnt==3) res[i][j]=1;
                    else res[i][j]=0;
                }
                else{
                    if(cnt==3) res[i][j]=1;
                }
            }
        }
        grid=res;
    }
};