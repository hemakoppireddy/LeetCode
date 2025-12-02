class Solution {
public:
    int numberOfMatches(int n) {
        int teams, matches, res=0;
        while(n!=1) {
            if(n%2==0){
                teams = n/2;
                matches=n/2;
            }
            else {
                teams=((n-1)/2)+1;
                matches = (n-1)/2;
            }
            res+=matches;
            n=teams;
        }
        return res;
    }
};