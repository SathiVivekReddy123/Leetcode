class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size(),res=((n/8)+1)*(n%8);
        n-=n%8;
        while(n>0){
            res+=n;
            n-=8;
        }
        return res;
    }
};