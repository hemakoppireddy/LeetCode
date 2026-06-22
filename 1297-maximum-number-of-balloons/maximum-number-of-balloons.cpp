class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        for(char ch: text) {
            mp[ch]++;
        }
        if(mp['b']==0 || mp['a']==0 || mp['l']<=1 || mp['o']<=1 || mp['n']==0) return 0;
        int mini = INT_MAX;
        for(auto i: mp) {
            if(i.first=='b' || i.first=='a' || i.first=='n') {
                mini = min(mini, i.second);
            }
            if( i.first=='l' || i.first=='o') {
                mini = min(mini, i.second/2);
            }
        }
        return mini;
    }
};