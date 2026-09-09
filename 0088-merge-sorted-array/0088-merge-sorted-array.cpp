// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> finalarr;

//         for (int i = 0; i < m; i++) {

//             finalarr.push_back(nums1[i]);
//         }

//         for (int j = 0; j < n; j++) {

//             finalarr.push_back(nums2[j]);
//         }

//         sort(finalarr.begin(), finalarr.end());

//         for (int k = 0; k < m + n; k++)
//             nums1[k] = finalarr[k];
//     }
    
// };

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s=m;
        int s1=0;
        while(s<nums1.size()){
            nums1[s]=nums2[s1];
            s1++;
            s++;
        }
        sort(nums1.begin(),nums1.end());
        
    }
};