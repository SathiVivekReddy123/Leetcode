class Solution {
public:
    bool canAliceWin(int n) {
        int cnt=1;
        for(int i=10;i>0 && n>=i;i--){
            n-=i;
            cnt++;
        }
        return cnt%2==0;
    }
};