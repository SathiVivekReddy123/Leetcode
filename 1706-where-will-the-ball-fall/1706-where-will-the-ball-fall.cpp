class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),i=0,k;
        vector<int>res(n,-1);
        for(int j=0;j<n;j++){
            i=0;
            bool flag=true;
            k=j;
            while(i<m){
                if(grid[i][k]==1){ 
                    if((k+1<n && grid[i][k+1]==-1) || (k==n-1)){
                    flag =false;
                    break;
                    }
                k++;
                }
                if(grid[i][k]==-1){
                    if((k-1>0 && grid[i][k-1]==1) || (k==0)){
                    flag=false;
                    break;
                    }
                k--;
                }
                i++;
            }
            if(flag) res[j]=k;
        }
        return res;
    }
};