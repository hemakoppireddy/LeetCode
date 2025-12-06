class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> res;
        // if(num==0) {
        //      res.emplace_back(-1);
        //     res.emplace_back(0);
        //     res.emplace_back(1);
        //     return res;
        // }
        // for(long long i=1; i<=num/3; i++){
        //     long long sum = i+(i+1)+(i+2);
        //     if(sum==num) {
        //         res.emplace_back(i);
        //         res.emplace_back(i+1);
        //         res.emplace_back(i+2);
        //         break;
        //     }
        // }

        long long i = num/3;
        long long sum = (i-1)+i+(i+1);
        if(sum==num){
            res.emplace_back(i-1);
            res.emplace_back(i);
            res.emplace_back(i+1);
        }
        return res;
    }
};