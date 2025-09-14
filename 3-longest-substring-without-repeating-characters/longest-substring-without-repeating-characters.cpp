class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, res=0;
        unordered_set<char> sw;
        for(int r=0;r<s.size();r++){
            while(sw.count(s[r])) {
                sw.erase(s[l]);
                l++;
            }
            sw.insert(s[r]);
            res=max(res, r-l+1);
        }
        return res;
    }
};