class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        int n=pattern.size();
        vector<bool>res;
        for(int i=0;i<queries.size();i++){
            int l=0;
            bool flag=true;
            for(int j=0;j<queries[i].size();j++){
                if(l<n && queries[i][j]==pattern[l]){
                    l++;
                }
                else if(queries[i][j]>='A' && queries[i][j]<='Z') {
                    flag=false;
                    break;
                }

            }
            if(l==n && flag) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};