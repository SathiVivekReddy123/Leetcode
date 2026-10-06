class Solution {
public:
    int minAddToMakeValid(string s) {
        int bf=0,res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') bf++;
            else bf--;
            if(bf<0){
                res++;
                bf=0;
            }
        }
        return res+bf;
    }
};