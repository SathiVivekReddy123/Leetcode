class Solution {
public:
int search(vector<int>&heaters,int target){
    int l=0,h=heaters.size()-1,ind=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(heaters[mid]<=target){
            ind=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    if(ind+1<heaters.size()){
        return min(abs(heaters[ind]-target),abs(heaters[ind+1]-target));
    }
    else return abs(heaters[ind]-target);
}
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int mx=0;
        for(int i=0;i<houses.size();i++){
            mx=max(mx,search(heaters,houses[i]));
        }
        return mx;
    }
};