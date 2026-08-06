class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int maxel = *max_element(nums.begin(),nums.end());
        vector<int> count(maxel+1,0);
        int n = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }

        for (int i = 0; i <= maxel; i++) {
            if (count[i] == n/2) {
                return i;
            }
        }
        return -1;
    }
};