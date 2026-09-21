class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        vector<int> ans;

        for(int i = 0; i<nums.size(); i++){
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());

        int st = 0, end = arr.size()-1;
        int currSum = 0;

        while(st<end){
            currSum = arr[st].first + arr[end].first;
            if(currSum == target){
                ans.push_back(arr[st].second);
                ans.push_back(arr[end].second);
                return ans;
            } else if(currSum > target){
                end --;
            } else{
                st++;
            }
        }
        return ans;
        
    }
};