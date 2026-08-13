class Solution {
public:
    int smallestValue(int n) {
	vector<int>prime(n);
    int res=n,temp=n;
	for(int i=0;i<n;i++) prime[i]=i+1;
	for(int i=1;i<n;i++){
	    if(prime[i]==i+1){
	        for(int j=i+prime[i];j<n;j+=prime[i]){
	            if(prime[j]==j+1)
	            prime[j]=prime[i];
	        }
	    }
	}
	while(prime[n-1]!=n){
        res=0;
	    while(n>1){
            res+=prime[n-1];
            n/=prime[n-1];
        }
        n=res;
        if(res==temp) break;
        else temp=res;
	}
    return res;
}
};