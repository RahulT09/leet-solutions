class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        int maxEl = *max_element(nums.begin(), nums.end());
        int minEl = *min_element(nums.begin(), nums.end());

        vector<int> count(maxEl+1,0);

        for(int i = 0; i<nums.size(); i++){
            count[nums[i]]++;
        }

        for(int i = minEl; i<=maxEl; i++){
            if(count[i] == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};