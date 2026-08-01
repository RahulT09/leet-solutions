class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstocc = -1;
        int lastocc = -1;

        if (nums.size() == 0) {
            firstocc = -1;
            lastocc = -1;
        }

        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
               firstocc = mid;
                end = mid - 1;
            }

            if (nums[mid] < target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }

       st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                lastocc = mid;
                st = mid + 1;
            }

            if (nums[mid] <= target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return {firstocc, lastocc};
    }
};