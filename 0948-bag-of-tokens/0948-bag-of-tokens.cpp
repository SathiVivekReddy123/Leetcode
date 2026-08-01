class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0,mx=0,l=0,r=tokens.size()-1;
        while(l<=r){
            if(power>=tokens[l]){
                power-=tokens[l];
                score++;
                mx=max(score,mx);
                l++;
            }
            else if(score>=1){
                power+=tokens[r];
                score--;
                r--;
            }
            else break;
        }
        return mx;
    }
};