class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size(),mn=1001,mx=-1;
        for(int i=0;i<n;i++){
            mn=min(mn,trips[i][1]);
            mx=max(mx,trips[i][2]);
        }
        vector<int>temp(mx-mn+1),ps(mx-mn+1);
        for(int i=0;i<n;i++){
            temp[trips[i][1]-mn]+=trips[i][0];
            temp[trips[i][2]-mn]-=trips[i][0];
        }
        if(temp[0]>capacity) return false;
        ps[0]=temp[0];
        for(int i=mn+1;i<=mx;i++){
            if(ps[i-mn-1]+temp[i-mn]>capacity) return false;
            ps[i-mn]=ps[i-mn-1]+temp[i-mn];
        }
        return true;
    }
};