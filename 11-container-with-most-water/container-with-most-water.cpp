class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea=0, i=0, j=n-1;
        while(i<n && j>0) {
            int area = (j-i) * min(height[i], height[j]);
            maxArea = max(area, maxArea);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return maxArea;
    }
};