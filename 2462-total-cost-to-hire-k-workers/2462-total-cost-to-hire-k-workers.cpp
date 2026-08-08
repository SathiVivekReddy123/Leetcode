class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int n=costs.size(),l=0,r=n-1;
        long long res=0;
        while(l<=r && candidates>0){
            if(l==r){
                pq.push({costs[l],l});
                l++;
                r--;
                break;
            }
            pq.push({costs[l],l});
            pq.push({costs[r],r});
            candidates-=1;
            l++;
            r--;
        }
        while(k>0){
            auto [p,q]=pq.top();
            res+=p;
            pq.pop();
            k--;
            if(l<=r){
            if(q<=l){
                pq.push({costs[l],l});
                l++;
            }
            else if(q>=r){
                pq.push({costs[r],r});
                r--;
            }
            }
        }
        return res;
    }
};