// Last updated: 5/26/2026, 12:50:48 PM
1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        int n = nums.size();
5        int i = n - 2;
6        while(i >= 0 && nums[i] >= nums[i+1]) i--;
7        if(i >= 0) {
8            int j = n - 1;
9            while(nums[j] <= nums[i]) j--;
10            swap(nums[i], nums[j]);
11        }
12        reverse(nums.begin() + i + 1, nums.end());
13    }
14};