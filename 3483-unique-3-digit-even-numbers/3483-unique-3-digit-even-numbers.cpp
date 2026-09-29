class Solution {
public:
void solve(vector<int>&digits,int num,int cnt,int& res,int& n,vector<int>&visited){
    if(cnt==3){
        res++;
        return;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(i>0 && digits[i]==digits[i-1] && !visited[i-1]) continue;
            if(cnt==0 && digits[i]==0) continue;
            else if(cnt==2 && digits[i]%2!=0) continue;
            visited[i]=1;
            num=num*10+digits[i];
            cnt++;
            solve(digits,num,cnt,res,n,visited);
            cnt--;
            visited[i]=0;
            num/=10;
        }
    }
    return;
}
    int totalNumbers(vector<int>& digits) {
        sort(digits.begin(),digits.end());
        int cnt=0,num=0,n=digits.size(),res=0;
        vector<int>visited(n,0);
        solve(digits,num,cnt,res,n,visited);
        return res;
    }
};