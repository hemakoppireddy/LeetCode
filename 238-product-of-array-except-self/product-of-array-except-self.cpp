class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product(n);
        product[0] = nums[0];
        int flag=0, count=0;
        if(nums[0]==0) {
            nums[0]=1;
            // flag=1;
            count++;
        }
        for(int i=1; i<n; i++) {
            if(product[i-1]==0) {
                product[i]=nums[i];
            }
            else if(nums[i]==0 ) {
                product[i] = 1 * product[i-1];
                // flag=1; 
                count++;
            }
            else product[i] = nums[i] * product[i-1];
        }
        for(int i=0; i<n; i++) {
            if( count==1){
                if(nums[i]!=0 && product[i]!=0) nums[i]=0;
                else nums[i] = product[n-1];
            }
            else if(count>1) nums[i]=0;
            else nums[i] = product[n-1]/nums[i];
        }
        return nums;
    }
};