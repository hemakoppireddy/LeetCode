class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int left=0, right=0, maxCount=0, count=0;
        while(right<n) {
            if(right==left+k){
                maxCount = max(maxCount, count);
                if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u') {
                    count--;
                }
                left++;
            }
            if(s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u'){
                count++;
            }
            right++;
        }
        maxCount = max(maxCount, count);
        return maxCount;
    }
};