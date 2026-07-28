class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);
        string left;
        char mid = '\0';
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            left.append(freq[i] / 2, 'a' + i);

            if (freq[i] % 2 != 0) {
                mid = 'a' + i;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        if (mid != '\0') {
            return (left + mid + right);
        }
        return left + right;
    }
};