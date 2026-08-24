class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int t=s.size();
        vector<int>res;
        for(int i=0;i<t;i++){
            int r=startPos[0],c=startPos[1],cnt=0;
            for(int j=i;j<t;j++){
                if(s[j]=='L') c--;
                else if(s[j]=='R') c++;
                else if(s[j]=='U') r--;
                else r++;
                if(r<0||r>=n||c<0||c>=n) break;
                cnt++;
            }
            res.push_back(cnt);
        }
        return res;
    }
};