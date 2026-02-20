class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size() ) swap(nums1, nums2);
        int n = nums1.size(), m = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;
        
        unordered_map<int , int> mpp1;
        unordered_map<int , int> mpp2;
        for(int i=0; i<n; i++) {
            mpp1[nums1[i]]++;
        }
        for(int i=0; i<m; i++) {
            mpp2[nums2[i]]++;
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(nums1[i]==nums2[j]) {
                    // if((mpp1[nums1[i]]==1 && mpp2[nums2[j]]==0) || 
                    //     (mpp1[nums1[i]]==0 && mpp2[nums2[j]]==1)) break;

                    if(mpp1[nums1[i]]==0 || mpp2[nums2[j]]==0) break;
                    else {
                        mpp1[nums1[i]]--;
                        mpp2[nums2[j]]--;
                        res.push_back(nums1[i]);
                    }
                    break;
                }
                else if(nums2[j]>nums1[i]) break;
            }
        }
        return res;
    }
};