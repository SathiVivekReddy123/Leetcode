class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        int top=0,bottom=m-1,left=0,right=n-1;
        while(top<=bottom && left<=right){
            vector<int>temp;
            for(int i=left;i<=right;i++) temp.push_back(grid[top][i]);
            top++;
            for(int i=top;i<=bottom;i++) temp.push_back(grid[i][right]);
            right--;
            for(int i=right;i>=left;i--) temp.push_back(grid[bottom][i]);
            bottom--;
            for(int i=bottom;i>=top;i--) temp.push_back(grid[i][left]);
            left++;
            int cnt=0,s=temp.size(),ind=k%s;
            while(cnt<=s){
                for(int i=left-1;i<=right+1;i++){
                    grid[top-1][i]=temp[ind%s];
                    ind++;
                    cnt++;
                }
            for(int i=top;i<=bottom+1;i++) {
                grid[i][right+1]=temp[ind%s];
                ind++;
                cnt++;
            }
            for(int i=right;i>=left-1;i--) {
                grid[bottom+1][i]=temp[ind%s];
                ind++;
                cnt++;
            }
            for(int i=bottom;i>=top;i--) {
                grid[i][left-1]=temp[ind%s];
                ind++;
                cnt++;
            }
            }
        }
        return grid;
    }
};