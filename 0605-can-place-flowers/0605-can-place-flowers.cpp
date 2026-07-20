class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=flowerbed.size(),cnt=0;
        if(s==1 && flowerbed[0]==0 && n==1) return true;
        for(int i=0;i<s;i++){
            if(flowerbed[i]==0){
                if(i==0 && i+1<s && flowerbed[i+1]==0){
                    cnt++;
                    flowerbed[i]=1;
                }
                else if(i==s-1 && i-1>=0 && flowerbed[i-1]==0){
                    cnt++;
                    flowerbed[i]=1;
                }
                else if(i+1<s && i-1>=0 && flowerbed[i+1]==0 && flowerbed[i-1]==0){
                    cnt++;
                    flowerbed[i]=1;
                }
            }
        }
        return cnt>=n;
    }
};