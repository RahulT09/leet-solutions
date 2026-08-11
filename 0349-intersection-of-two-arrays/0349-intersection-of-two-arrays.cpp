class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        sort(nums2.begin(), nums2.end());

        unordered_set<int> ans;
     

        for (int i = 0; i < nums1.size(); i++) {
            int st = 0, end = nums2.size() - 1;

            while (st <= end) {
                int mid = st + (end - st) / 2;

                if (nums1[i] == nums2[mid]) {
                    ans.insert(nums1[i]);
                    break;
                }
                 
                if (nums1[i] > nums2[mid]) {
                    st = mid+1;
                } else {
                    end = mid - 1;
                }
               
            }
        }
        return vector<int>(ans.begin(),ans.end());
    }
};