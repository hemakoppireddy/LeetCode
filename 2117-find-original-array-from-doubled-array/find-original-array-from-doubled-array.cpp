class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        sort(changed.begin(), changed.end());
        if(n%2==1) return {};
        
        unordered_map<int,int> freq;
        for (int x : changed) freq[x]++;
        
        vector<int> res;
        for (int x : changed) {
            if (freq[x] == 0) continue;  
            if (freq[2*x] == 0) return {};  
            
            res.push_back(x);
            freq[x]--;
            freq[2*x]--;
        }
        
        return res;
    }
};