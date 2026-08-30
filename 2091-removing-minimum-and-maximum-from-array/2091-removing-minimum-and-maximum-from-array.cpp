class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minIndex = 0;
        int maxIndex = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] < nums[minIndex])
                minIndex = i;

            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }

        int front = max(minIndex, maxIndex) + 1;

        int back = max(n - minIndex, n - maxIndex);

        int mixed1 = minIndex + 1 + n - maxIndex;
        int mixed2 = maxIndex + 1 + n - minIndex;

        return min({front, back, mixed1, mixed2});
    }
};