class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> ans1 = nums;
      vector<int> ans2 = nums;
     ans1.insert(ans1.end(),ans2.begin(),ans2.end());
     return ans1;
    }
};