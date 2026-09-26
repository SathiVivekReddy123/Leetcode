class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(int i=0;i<knowledge.size();i++) mp[knowledge[i][0]]=knowledge[i][1];
        string temp="",res="";
        bool f=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') f=true;
            else if(s[i]==')'){
                if(mp.count(temp))
                res+=mp[temp];
                else res+='?';
                f=false;
                temp="";
            }
            else{
            if(f) temp+=s[i];
            else res+=s[i];
            }
        }
        return res;
    }
};