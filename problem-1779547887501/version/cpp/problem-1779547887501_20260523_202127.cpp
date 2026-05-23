// Last updated: 5/23/2026, 8:21:27 PM
1class Solution {
2public:
3    int minimumSwaps(vector<int>& nums) {
4        int z = 0;
5        for (int num : nums) {
6            if (num == 0) z++;
7        }
8        int n = nums.size();
9        int swaps = 0;
10        for (int i = n - z; i < n; i++) {
11            if (nums[i] != 0) swaps++;
12        }
13        return swaps;
14    }
15};