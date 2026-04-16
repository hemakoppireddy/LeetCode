class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> freq;
        int left=0, maxlen=0;
        for(int right=0; right<n; right++) {
            while(freq.count(s[right])) {
                freq.erase(s[left]);
                left++;
            }
            freq.insert(s[right]);
            maxlen = max(maxlen, right-left+1);
        }
        return maxlen;
    }
};