class Solution {
public:
string remove(string &s,int &res,char l,char r,int val){
    string temp="";
    for(int i=0;i<s.size();i++){
        if(!temp.empty() && temp.back()==l && s[i]==r){
            res+=val;
            temp.pop_back();
        }
        else temp.push_back(s[i]);
    }
    return temp;
}
    int maximumGain(string s, int x, int y) {
        int res=0;
        if(x>y){
            s=remove(s,res,'a','b',x);
            remove(s,res,'b','a',y);
        }
        else{
            s=remove(s,res,'b','a',y);
            remove(s,res,'a','b',x);
        }
        return res;
    }
};