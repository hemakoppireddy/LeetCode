class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> st;
        int maxlen = 0;
        int left=0, right=0;
        while(right<n && left<n) {
            while(left<n && st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxlen = max(maxlen, right-left+1);
            right++;
        }
        return maxlen;
    }
};