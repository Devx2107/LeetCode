// Last updated: 6/6/2026, 8:22:19 PM
1class Solution {
2public:
3    long long maxTotal(vector<int>& nums, string s) {
4        int n = nums.size();
5        long long ans = 0;
6        int i = 0;
7        while (i < n) {
8            if (s[i] == '0') {
9                i++;
10                continue;
11            }
12            int l = i;
13            while (i < n && s[i] == '1')
14                i++;
15            int r = i - 1;
16            if (l == 0) {
17                for (int j = l; j < r + 1; j++)
18                    ans += nums[j];
19            } else {
20                long long sum = 0;
21                int mn = INT_MAX;
22                for (int j = l - 1; j < r + 1; j++) {
23                    sum += nums[j];
24                    mn = min(mn, nums[j]);
25                }
26                ans += sum - mn;
27            }
28        }
29        return ans;
30    }
31};