// Last updated: 6/3/2026, 1:57:32 PM
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        vector<int> ans;
5        for(int i = 0; i < nums.size(); i++) {
6            int x = abs(nums[i]);
7            int idx = x - 1;
8            if(nums[idx] < 0) {
9                ans.push_back(x);
10            }
11            else {
12                nums[idx] *= -1;
13            }
14        }
15        return ans;
16    }
17};