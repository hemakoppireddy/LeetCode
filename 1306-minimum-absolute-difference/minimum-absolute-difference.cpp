class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int mindif = INT_MAX;
        for(int i=0; i<n-1; i++) {
            int diff = arr[i+1]-arr[i];
            if(arr[i]<arr[i+1]) {
                mindif = min(mindif, diff);
            }
        }
        vector<vector<int>> res;
        for(int i=0; i<n-1; i++) {
            int diff = arr[i+1]-arr[i];
            if(diff==mindif){
                res.push_back({arr[i], arr[i+1]});
            }
        }
        return res;
    }
};