class Solution {
public:
int count(int a){
    int cnt=0;
    while(a){
        cnt+=(a&1);
        a>>=1;
    }
    return cnt;
}
    vector<int> countBits(int n) {
        vector<int>r;
        for(int i=0;i<=n;i++){
            r.push_back(count(i));
        }
        return r;
    }
};