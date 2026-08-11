class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int, int>> st;
        vector<int> res;
        reverse(temperatures.begin(), temperatures.end());
        for(int i=0; i<n; i++) {
            while(!st.empty() && temperatures[i]>=st.top().first && i<n) {
                st.pop();
            }
            if(st.empty()) {
                st.push({temperatures[i], i});
                res.push_back(0);
            }
            if(temperatures[i]<st.top().first) {
                res.push_back(i-st.top().second);
                st.push({temperatures[i], i});
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};