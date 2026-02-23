class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        int l=0, h=n-1;
        vector<int> res(2);
        while(l<=h) {
            int mid = (l+(h-l))/2;
            while(numbers[mid]>target && numbers[mid]+numbers[l]>target) {
                h = mid-1;
            }
            // else {
                int i=l, j=h;
                while(i<j){
                    int sum = numbers[i] + numbers[j];
                    if(sum==target) {
                        res[0] = i+1;
                        res[1] = j+1;
                        return res;
                    }
                    else if(sum>target) j--;
                    else i++;
                }
            // }
        }
        return res;
    }
};