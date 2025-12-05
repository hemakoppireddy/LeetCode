class Solution {
public:
    bool isRobotBounded(string instructions) {
        vector<pair<int, int>> steps = {{0,1}, {1, 0}, {0, -1}, {-1, 0}};
        int x=0, y=0, d=0;
        for(char c: instructions) {
            if(c == 'G'){
                x += steps[d].first;
                y += steps[d].second;
            }
            else if(c=='L') d = (d+1)%4;
            else if(c=='R') d = (d+3)%4;
        } 
        return (x==0 && y==0) || d!=0;
    }
};