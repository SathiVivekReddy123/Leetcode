class Solution {
public:
bool isplaced(vector<int>&position,int& balls,int val){
    int cnt=1,l=position[0];
    for(int i=1;i<position.size();i++){
        if(position[i]-l>=val){
            cnt++;
            l=position[i];
        }
        if(cnt>=balls) return 1;
    }
    return 0;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size(),low=1,high=position[n-1]-position[0],res=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isplaced(position,m,mid)){
                low=mid+1;
                res=mid;
            }
            else high=mid-1;
        }
        return res;
    }
};