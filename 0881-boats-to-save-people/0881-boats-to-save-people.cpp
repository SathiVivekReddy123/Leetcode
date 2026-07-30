class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size(),l=0,r=n-1,cnt=0;
        sort(people.begin(),people.end());
        while(l<=r){
            if(l==r){
            cnt++;
            break;
            }
            if(people[l]+people[r]<=limit){
                cnt++;
                l++;
                r--;
            }
            else{
                cnt++;
                r--;
            }
        }
        return cnt;
    }
};