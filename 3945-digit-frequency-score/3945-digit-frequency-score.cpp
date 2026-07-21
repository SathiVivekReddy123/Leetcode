class Solution {
public:
    int digitFrequencyScore(int n) {
       int sum=0;
       unordered_map<int,int>mp;
       while(n>0){
        mp[n%10]++;
        n/=10;
       } 
       for(auto &it:mp){
        sum+=(it.first*it.second);
       }
       return sum;
    }
};