// Last updated: 6/1/2026, 1:35:35 PM
1class Solution {
2public:
3
4    bool canSplit(vector<int>& nums, int m, long long limit) {
5        int parts = 1;
6        long long curr = 0;
7        for(int x : nums) {
8            if(curr + x <= limit) {
9                curr += x;
10            }
11            else {
12                parts++;
13                curr = x;
14            }
15        }
16
17        return parts <= m;
18    }
19
20    int splitArray(vector<int>& nums, int m) {
21
22        long long l = *max_element(nums.begin(), nums.end());
23        long long r = accumulate(nums.begin(), nums.end(), 0LL);
24        long long ans = r;
25        while(l <= r) {
26            long long mid = l + (r - l) / 2;
27            if(canSplit(nums, m, mid)) {
28                ans = mid;
29                r = mid - 1;
30            }
31            else {
32                l = mid + 1;
33            }
34        }
35        return ans;
36    }
37};