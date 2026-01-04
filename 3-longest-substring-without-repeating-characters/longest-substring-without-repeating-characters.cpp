class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==0 || n==1) return n;
        int maxlen = 0;
        vector<bool>visited(256, false);
        int left=0, right=0;
        while(right<n) {
            while(visited[s[right]] ==true ) {
                visited[s[left]] = false;
                left++;
            }
            visited[s[right]]=true;
            maxlen = max(maxlen, right-left+1);
            right++;
        }
        return maxlen;
    }
};