class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(1, 1);
        for(int i=0; i<rowIndex; i++) {
            vector<int> r;
            r.push_back(1);
            for(int j=1; j<res.size(); j++) {
                r.push_back(res[j-1]+res[j]);
            }
            r.push_back(1);
            res=r;
        }
        return res;
    }
};