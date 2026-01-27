class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int count=0;
        int left=0, right=0;
        int mindiff = INT_MAX;
        vector<int> res;
        int leftIdx, rightIdx, diffsum=0;
        while(left<n && right<n) {
            while(count<k && right<n) {
                diffsum += (abs(x-arr[right]));
                count++;
                right++;

            }
            if(diffsum<mindiff) {
                mindiff=diffsum;
                leftIdx = left;
                rightIdx = right;
            }
            diffsum-=(abs(x-arr[left]));
            left++;
            count--;
        }
        for(int i=leftIdx; i<rightIdx; i++) {
            res.push_back(arr[i]);
        }
        return res;
    }
};