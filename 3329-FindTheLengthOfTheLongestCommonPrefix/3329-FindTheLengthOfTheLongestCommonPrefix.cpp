// Last updated: 28/05/2026, 14:00:17
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefixes;

        for (int val : arr1) {
            while (val > 0) {
                prefixes.insert(val);
                val /= 10; 
            }
        }

        int maxLength = 0;

        for (int val : arr2) {
            while (val > 0) {
                if (prefixes.count(val)) {
                    int currentLength = to_string(val).length();
                    maxLength = max(maxLength, currentLength);
                    break; 
                }
                val /= 10;
            }
        }

        return maxLength;
    }
};
