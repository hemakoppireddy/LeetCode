class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int left=0, right=0, diff=0, count=0;
        int leftIdx, rightIdx, mindiff=INT_MAX;
        while(left<n && right<n) {
            while(count<k && right<n) {
                diff+=abs(x-arr[right]);
                right++;
                count++;
            }
            if(diff<mindiff) {
                mindiff = diff;
                leftIdx = left;
                rightIdx = right;
            }
            diff-=abs(x-arr[left]);
            left++;
            count--;
        }
        vector<int> res;
        for(int i=leftIdx; i<rightIdx; i++) {
            res.push_back(arr[i]);
        }
        return res;
    }
};