class Solution {
public:
int product(int n){
    int res=1;
    while(n>0){
        res*=(n%10);
        n/=10;
    }
    return res;
}
    int smallestNumber(int n, int t) {
        while(n<=100){
            if(product(n)%t==0) return n;
            n++;
        }
        return 0;
    }
};