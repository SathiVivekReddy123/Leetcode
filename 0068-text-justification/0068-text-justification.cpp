class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n=words.size();
        vector<string>res;
        vector<int>ps(n);
        ps[0]=words[0].size();
        int l=0,r=0;
        for(int i=1;i<n;i++) ps[i]=ps[i-1]+words[i].size();
        int val=0;
        while(r<n){
            if(ps[r]+(r-l)-val>maxWidth){
                string temp="";
                if(r-l-1==0){
                    temp+=words[l];
                    temp.append(maxWidth-ps[r-1]+val,' ');
                }
                else{
                int gaps=maxWidth-ps[r-1]+val-(r-l-1);
                int left=gaps%(r-l-1);
                gaps/=(r-l-1);
                for(int i=l;i<r-1;i++){
                    temp+=words[i];
                    int s=gaps+1;
                    if(i-l<left) s++;
                    temp.append(s,' ');
                }
                temp+=words[r-1];
                }
                res.push_back(temp);
                l=r;
                val=ps[r-1];
            }
            r++;
        }
        string temp="";
        int cnt=n-1-l+ps[n-1];
        if(l>0) cnt-=ps[l-1];
        for(int i=l;i<n-1;i++){
            temp+=words[i]+' ';
        }
        temp+=words[n-1];
        temp.append(maxWidth-cnt,' ');
        res.push_back(temp);
        return res;
    }
};