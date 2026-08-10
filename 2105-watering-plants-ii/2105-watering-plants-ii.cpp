class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n=plants.size(),l=0,r=n-1,c1=capacityA,c2=capacityB,cnt=0;
        while(l<=r){
            if(l==r){
                if(c1>=c2){
                    if(c1<plants[l]) cnt++;
                }
                else{
                    if(c2<plants[l]) cnt++;
                }
                break;
            }
            if(plants[l]<=c1){
                c1-=plants[l];
            }
            else{
                c1=capacityA;
                c1-=plants[l];
                cnt++;
            }
            l++;
            if(plants[r]<=c2){
                c2-=plants[r];
            }
            else{
                c2=capacityB;
                c2-=plants[r];
                cnt++;
            }
            r--;
        }
        return cnt;
    }
};