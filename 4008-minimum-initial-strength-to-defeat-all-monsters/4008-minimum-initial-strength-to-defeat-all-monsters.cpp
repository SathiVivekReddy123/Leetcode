class Solution {
public:
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int n=monsters.size();
        vector<long long>temp(n+1),bonus(n),ps(n);
        for(int i=0;i<boosts.size();i++){
            temp[boosts[i][0]]+=boosts[i][2];
            temp[boosts[i][1]+1]-=boosts[i][2];
        }
        bonus[0]=temp[0];
        long long val=0;
        ps[0]=monsters[0];
        if(bonus[0]<monsters[0]) val=max(val,monsters[0]-bonus[0]);
        for(int i=1;i<n;i++){
            bonus[i]=bonus[i-1]+temp[i];
            ps[i]=ps[i-1]+monsters[i];
            if(bonus[i]<monsters[i]) val=max(val,ps[i-1]-bonus[i]+monsters[i]);
        }
        return val;
    }
};