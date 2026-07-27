class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int l=0,r=0,n1=series1.size(),n2=series2.size();
        vector<vector<int>>res;
        while(l<n1 && r<n2){
            if(series1[l][0]==series2[r][0]){
                res.push_back({series1[l][0],series1[l][1]+series2[r][1]});
                l++;
                r++;
            }
            else if(series1[l][0]<=series2[r][0]){
                res.push_back({series1[l][0],series1[l][1]+series2[r][1]});
                l++;
            }
            else{
                res.push_back({series2[r][0],series1[l][1]+series2[r][1]});
                r++;
            }
        }
        while(l<n1){
            res.push_back({series1[l][0],series1[l][1]});
            l++;
        }
        while(r<n2){
            res.push_back({series2[r][0],series2[r][1]});
            r++;
        }
        return res;
    }
};