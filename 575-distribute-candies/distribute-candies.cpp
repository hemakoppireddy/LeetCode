class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        map<int, int> mpp;
        for(int i=0; i<n; i++) {
            mpp[candyType[i]]++;
        }
        int difele =  mpp.size();
        if(difele<=n/2) return difele;
        else return n/2;
    }
};