class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int a=start[0]+start[1],b=target[0]+target[1];
        if((a%2==0 && b%2==0) ||(a%2!=0 && b%2!=0)) return true;
        else return false;
        return false;
    }
};