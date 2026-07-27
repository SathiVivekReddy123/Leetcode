class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int m1=INT_MAX,m2=INT_MAX,n1=landStartTime.size(),n2=waterStartTime.size();
        for(int i=0;i<n1;i++) m1=min(landStartTime[i]+landDuration[i],m1);
        int mn=INT_MAX;
        for(int i=0;i<n2;i++){
            m2=min(waterStartTime[i]+waterDuration[i],m2);
            if(m1<waterStartTime[i])
            mn=min(mn,waterStartTime[i]+waterDuration[i]);
            else 
            mn=min(mn,m1+waterDuration[i]);
        }
        for(int i=0;i<n1;i++){
            if(m2<landStartTime[i])
            mn=min(mn,landStartTime[i]+landDuration[i]);
            else 
            mn=min(mn,m2+landDuration[i]);
        }
        return mn;
    }
};