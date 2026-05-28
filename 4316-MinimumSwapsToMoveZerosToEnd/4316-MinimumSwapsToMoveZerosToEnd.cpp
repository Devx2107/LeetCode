// Last updated: 28/05/2026, 14:00:07
class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int z = 0;
        for (int num : nums) {
            if (num == 0) z++;
        }
        int n = nums.size();
        int swaps = 0;
        for (int i = n - z; i < n; i++) {
            if (nums[i] != 0) swaps++;
        }
        return swaps;
    }
};