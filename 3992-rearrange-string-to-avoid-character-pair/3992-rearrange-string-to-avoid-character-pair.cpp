class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string res="";
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==y) temp+=y;
            else res+=s[i];
        }
        return temp+res;
    }
};