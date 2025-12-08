class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        // st.push(asteroids[0]);
        for(int i=0; i<n; i++) {
            if(asteroids[i]>0) st.push(asteroids[i]);
            else {
                if(!st.empty() && st.top() == abs(asteroids[i])){
                    st.pop();continue;
                }
                else if(!st.empty() && st.top()< 0) st.push(asteroids[i]);
                else if(!st.empty() && st.top() > abs(asteroids[i])) continue;
                else {
                   if(!st.empty() && st.top() < abs(asteroids[i])){
                    while(!st.empty() && st.top()>0 && st.top() < abs(asteroids[i]) ){
                        st.pop();
                    }
                   }
                   if(st.empty() || st.top()<0) st.push(asteroids[i]);
                   else if (!st.empty() && st.top() == abs(asteroids[i])) {
                        st.pop();
                   }

                }
            }
        }
        int size = st.size();
        vector<int> res(size);
        if(!st.empty()){
            for(int i=size-1; i>=0;i--) {
                res[i] = st.top();
                st.pop();
            }
        }
        return res;
    }
};