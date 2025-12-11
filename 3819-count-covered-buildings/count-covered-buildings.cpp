class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, vector<int>> rows; 
        unordered_map<int, vector<int>> cols;
    for (auto& b : buildings) {
        int x = b[0];
        int y = b[1];
        rows[x].push_back(y);
        cols[y].push_back(x);
    }
    for (auto& r : rows)
        sort(r.second.begin(), r.second.end());
    for (auto& c : cols)
        sort(c.second.begin(), c.second.end());
    int covered = 0;
    for (auto& b : buildings) {
        int x = b[0];
        int y = b[1];
        auto& ys = rows[x];
        auto& xs = cols[y];
        bool hasLeft = ys[0] < y;
        bool hasRight = ys.back() > y;
        bool hasAbove = xs[0] < x;
        bool hasBelow = xs.back() > x;
        if (hasLeft && hasRight && hasAbove && hasBelow)
            covered++;
    }
    return covered;
    }
};