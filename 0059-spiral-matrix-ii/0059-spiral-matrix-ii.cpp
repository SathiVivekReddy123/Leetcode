class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res(n,vector<int>(n));
        int top=0,bottom=n-1,left=0,right=n-1,step=1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                res[top][i]=step;
                step++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                res[i][right]=step;
                step++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    res[bottom][i]=step;
                    step++;
                }
                bottom--;
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                res[i][left]=step;
                step++;
            }
            left++;
        }
        }
        return res;
    }
};