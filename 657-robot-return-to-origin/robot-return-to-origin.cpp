class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int countU=0, countD=0, countR=0, countL=0;
        for(int i=0;i<n;i++) {
            if(moves[i]=='U') countU++;
            else if(moves[i]=='D') countD++;
            else if(moves[i]=='R') countR++;
            else countL++;
        }
        if(countU==countD && countR==countL) return true;
        return false;
    }
};