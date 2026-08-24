class Solution {
public:
    int reverseBits(int n) {
        string temp="";
        while(n){
            temp+=(n%2)+'0';
            n/=2;
        }
        int l=temp.size();
        string s=temp;
        for(int i=0;i<32-l;i++){
            s+='0';
        }
        long long res=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') res+=pow(2,i);
        }
        return res;
    }
};