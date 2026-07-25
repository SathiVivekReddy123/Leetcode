class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n=emails.size();
        unordered_set<string>s;
        for(int i=0;i<n;i++){
            int c1=0,c2=0;
            string temp="";
            for(int j=0;j<emails[i].size();j++){
                if(emails[i][j]=='@') c2++;
                else if(emails[i][j]=='+') c1++;
                if(c2) temp+=emails[i][j];
                else if(c1==0 && emails[i][j]!='.') temp+=emails[i][j];
            }
            s.insert(temp);
        }
        return s.size();
    }
};