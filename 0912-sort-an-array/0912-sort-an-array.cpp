class Solution {
public:
    void merge(vector<int>& nums, int st, int end, int mid) {

        int i = st, j = mid + 1;
        vector<int> temp;

        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }

           
        }

         while (i <= mid) {
                temp.push_back(nums[i++]);
            }
            while (j <= end) {
                temp.push_back(nums[j++]);
            }

        for (int i = st, x = 0; i <= end; i++) {
            nums[i] = temp[x++];
        }

        
    }

   void mergeSort(vector<int>& nums, int st, int end) {

        if (st >= end) {
            return ;
        }

        int mid = st + (end - st) / 2;

        mergeSort(nums, st, mid);
        mergeSort(nums, mid + 1, end);

        merge(nums, st, end, mid);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        return nums;
    }
};