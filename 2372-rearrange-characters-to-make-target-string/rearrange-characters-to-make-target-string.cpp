class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        if(s.size()<target.size()) return 0;
        unordered_map<char, int> mp;
        unordered_map<char, int> t_map;
        for(char ch: s) {
            mp[ch]++;
        }
        for(char ch: target) {
            t_map[ch]++;
        }
        int mini = INT_MAX;
        for(auto i: t_map) {
            if(mp[i.first]< i.second) return 0;
            else {
                mini = min(mini, mp[i.first]/i.second);
            }
        }
        return mini;
    }
};