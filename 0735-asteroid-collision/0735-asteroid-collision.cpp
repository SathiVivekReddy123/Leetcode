class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>res;
        for(int i=0;i<asteroids.size();i++){
            bool f=true;
            if(asteroids[i]>0){
                st.push(asteroids[i]);
                continue;
            }
            else{
            while(!st.empty() && st.top()>0){
                if(st.top()>abs(asteroids[i])){
                    f=false;
                    break;
                }
                else if(st.top()==abs(asteroids[i])){
                    st.pop();
                    f=false;
                    break;
                }
                else st.pop();
            }
            if(f) st.push(asteroids[i]);
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};