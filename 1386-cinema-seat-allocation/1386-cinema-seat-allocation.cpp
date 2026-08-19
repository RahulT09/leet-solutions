class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> row;

        // Store reserved seats as bits.
        for (auto &seat : reservedSeats) {
            int r = seat[0];
            int s = seat[1];

            row[r] |= (1 << (s - 1));
        }

        int ans = 0;

        // Process only rows containing reservations.
        for (auto &[r, mask] : row) {

            // Seats 2-5
            int left = 0b00000011110;

            // Seats 4-7
            int middle = 0b0001111000;

            // Seats 6-9
            int right = 0b0111100000;

            bool canLeft = (mask & left) == 0;
            bool canMiddle = (mask & middle) == 0;
            bool canRight = (mask & right) == 0;

            if (canLeft && canRight) {
                ans += 2;
            }
            else if (canLeft || canMiddle || canRight) {
                ans += 1;
            }
        }

        // Rows without reservations can always fit 2 families.
        ans += (n - row.size()) * 2;

        return ans;
    }
};