class Solution {
public:
    string reverseWords(string s) {
        int l=s.size()-1;
        string res="";
        while(s[l]==' ') l--;
        int r=l;
        while(l>=0 && r>=0){
            if(s[l]==' '){
                res.append(s,l+1,r-l);
                res+=' ';
                while(l>=0 && s[l]==' ') l--;
                r=l;
            }
            else{
                l--;
            }
        }
        if(s[0]==' ') res.pop_back();
        else res.append(s,l+1,r-l);
        return res;
    }
};