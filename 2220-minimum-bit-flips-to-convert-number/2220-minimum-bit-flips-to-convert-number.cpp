class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0,temp=start^goal;
        while(temp>0){
            if(temp&1) cnt++;
            temp>>=1;
        }
        return cnt;
    }
};