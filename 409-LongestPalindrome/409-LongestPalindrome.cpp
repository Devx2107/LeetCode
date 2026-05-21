// Last updated: 21/05/2026, 18:11:19
class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(256, 0);
        for (char& ch : s) freq[ch]++;

        int res = 0;
        bool odd = false;

        for (int i = 0; i < 256; i++) {
            if ((freq[i] & 1) == 0) res += freq[i];
            else {
                res += freq[i] - 1;
                odd = true;
            }
        }

        if (odd) res += 1;
        return res;
    }
};