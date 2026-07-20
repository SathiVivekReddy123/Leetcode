class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        long long p;
        if((n-1)%2==0) p=((n-1)/2);
        else p=((n-1)/2)+1;
        return s+(p*m)-p+1;
    }
};