// Last updated: 6/1/2026, 1:06:33 PM
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int l = 0;
5        int r = nums.size() - 1;
6        while(l < r) {
7            int mid = l + (r - l) / 2;
8            if(mid % 2 == 1) mid--;
9            if(nums[mid] == nums[mid + 1]) l = mid + 2;
10            else r = mid;
11        }
12        return nums[l];
13    }
14};