class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int pointer = 1;

        for(int i= 0; i<nums.size(); i++){
            if(pointer == nums[i]){
                pointer++;
            }
        }
        return pointer;
    }
};