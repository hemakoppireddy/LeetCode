class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0);
        vector<bool> visited(26, false);
        string stack;
        for (char c : s) {
            freq[c - 'a']++;
        }
        for (char c : s) {
            int idx = c - 'a';
            freq[idx]--;
            if (visited[idx]) continue;
            while (!stack.empty() && stack.back() > c && freq[stack.back() - 'a'] > 0) {
                visited[stack.back() - 'a'] = false;
                stack.pop_back();
            }
            stack.push_back(c);
            visited[idx] = true;
        }
        return stack;
    }
};