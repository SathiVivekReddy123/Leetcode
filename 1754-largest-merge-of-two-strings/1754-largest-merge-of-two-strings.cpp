class Solution {
public:
    string largestMerge(string word1, string word2) {
        int n1=word1.size(),n2=word2.size(),l=0,r=0;
        string res="";
        while(l<n1 && r<n2){
            if(word1[l]<word2[r]){
                res+=word2[r++];
            }
            else if(word1[l]>word2[r]) res+=word1[l++];
            else{
                int p=l,q=r;
                while((p<n1 && q<n2) && word1[p]==word2[q]){
                    p++;
                    q++;
                }
                if(q==n2){
                    res+=word1[l++];
                }
                else if(p==n1){
                    res+=word2[r++];
                }
                else{
                    if(word1[p]>word2[q])
                        res+=word1[l++];
                    else
                        res+=word2[r++];
                }
            }
        }
        while(l<n1) res+=word1[l++];
        while(r<n2) res+=word2[r++];
        return res;
    }
};