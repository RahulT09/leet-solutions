class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int arr[101] = {0};
        vector<int> ans;
        for (int i = 0; i < bulbs.size(); i++) {
            arr[bulbs[i]]++;
        }

        for (int i = 1; i <= 100; i++) {
            if (arr[i] % 2 != 0) {
                ans.push_back(i);
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};