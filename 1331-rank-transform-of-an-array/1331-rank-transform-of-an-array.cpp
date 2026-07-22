class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp;
        temp=arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int>mp;
        int cnt=1;
        for(int i=0;i<temp.size();i++){
            if(mp.find(temp[i])!=mp.end()) continue;
            else {
            mp[temp[i]]=cnt;
            cnt++;
            }
        }
        for(int i=0;i<arr.size();i++) arr[i]=mp[arr[i]];
        return arr;
    }
};