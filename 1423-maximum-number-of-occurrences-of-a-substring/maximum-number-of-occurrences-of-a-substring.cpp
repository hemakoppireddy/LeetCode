class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int n = s.size();
        int ans = 0;
        unordered_map<string, int> mpp;
        for(int i=0; i+minSize<=n; i++) {
            string sub = s.substr(i, minSize);
            unordered_set<char> unq;
            for(char ch: sub) {
                unq.insert(ch);
            }
            if(unq.size()<=maxLetters) {
                mpp[sub]++;
                ans = max(ans, mpp[sub]);
            }
        }
        return ans;
    }
};