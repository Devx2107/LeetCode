// Last updated: 6/13/2026, 10:35:42 AM
1class Solution {
2public:
3    string optimalDivision(vector<int>& nums) {
4
5        int n = nums.size();
6
7        if (n == 1)
8            return to_string(nums[0]);
9
10        if (n == 2)
11            return to_string(nums[0]) + "/" + to_string(nums[1]);
12
13        string ans = to_string(nums[0]) + "/(";
14
15        for (int i = 1; i < n; i++) {
16
17            ans += to_string(nums[i]);
18
19            if (i != n - 1)
20                ans += "/";
21        }
22
23        ans += ")";
24
25        return ans;
26    }
27};