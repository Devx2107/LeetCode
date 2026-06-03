// Last updated: 6/3/2026, 2:15:00 PM
1class Solution {
2public:
3    int partitionDisjoint(vector<int>& nums) {
4        int n = nums.size();
5        int leftMax = nums[0], curMax = nums[0], idx = 0;
6        for (int i = 1; i < n; i++) {
7            curMax = max(curMax, nums[i]);
8            if (nums[i] < leftMax) { leftMax = curMax; idx = i; }
9        }
10        return idx + 1;
11    }
12};