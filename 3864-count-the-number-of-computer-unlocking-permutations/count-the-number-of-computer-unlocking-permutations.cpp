class Solution {
public:
const long long mod = 1000000007;
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        bool flag=false;
        int count=1;
        for(int i=1; i<n;i++) {
            if(complexity[i]>complexity[i-1] || complexity[0]< complexity[i]) count++;
        }
        if(count==n) flag=true;
        long long res=1;
        if(flag){
            for(int i=2; i<n; i++) res =(res*i)%mod;
            return res;
        };
        return 0;
    }
};