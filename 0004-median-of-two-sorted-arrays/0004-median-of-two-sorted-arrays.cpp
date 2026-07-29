class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3 = nums1;
        
        for(int i =0; i<nums2.size(); i++){
            nums3.push_back(nums2[i]);
        }
        sort(nums3.begin(),nums3.end());
        int st = 0, end = nums3.size();

        if(nums3.size() % 2 == 0){
            double mid =  nums3.size()/2;
            double ans = ((nums3[mid] + nums3[mid-1])/2.0);
            return ans;
        } else{
            double mid =  nums3.size()/2;
            return nums3[mid];
        }
        
        return 0;
    }
};