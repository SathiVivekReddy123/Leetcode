class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>res(n,vector<int>(m,1));
        vector<vector<int>>p(n,vector<int>(m)),s(n,vector<int>(m));
        long long val1=1,val2=1,mod=12345;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               p[i][j]=((val1%mod)*(grid[i][j]%mod))%mod;
               val1=p[i][j];
               s[n-1-i][m-j-1]=((val2%mod)*(grid[n-1-i][m-1-j]%mod))%mod;
               val2=s[n-1-i][m-j-1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a=j-1,b=i,c=(j+1)%m,d=i+((j+1)/m);
                if(a<0){
                    b=i-1;
                    a=m-1;
                }
                if(b>=0) res[i][j]*=p[b][a];
                if(d<n) res[i][j]=((res[i][j]%mod)*(s[d][c]%mod))%mod;
            }
        }
        return res;
    }
};