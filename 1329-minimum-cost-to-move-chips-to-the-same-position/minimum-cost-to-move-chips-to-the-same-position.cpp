class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n = position.size();
        int even_count=0, odd_count=0;
        for(int i=0; i<n; i++) {
            if(position[i]%2==0) {
                even_count++;
            }
            else {
                odd_count++;
            }
        }
        return min(even_count, odd_count);
    }
};