class Solution {
public:
int sum(int n){
    int a=0;
    while(n){
        int r=n%10;
        a+=(r*r);
        n/=10;
    }
    return a;
}
    bool isHappy(int n) {
        unordered_map<int,int>map;
        while(1){
            n=sum(n);
            if(n==1) return true;
            if(map.find(n)==map.end()) map[n]=1;
            else return false;
        }
        return true;
    }
};