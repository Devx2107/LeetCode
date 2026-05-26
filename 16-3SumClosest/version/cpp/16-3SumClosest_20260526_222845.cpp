// Last updated: 5/26/2026, 10:28:45 PM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        int n = nums.size();
6        int closest = nums[0] + nums[1] + nums[2];
7        for(int i = 0; i < n - 2; i++) {
8            int l = i + 1;
9            int r = n - 1;
10            while(l < r) {
11                int sum = nums[i] + nums[l] + nums[r];
12                if(abs(sum - target) < abs(closest - target)) {
13                    closest = sum;
14                }
15                if(sum < target) {
16                    l++;
17                }
18                else if(sum > target) {
19                    r--;
20                }
21                else {
22                    return sum;
23                }
24            }
25        }
26        return closest;
27    }
28};