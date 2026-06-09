// Last updated: 6/9/2026, 8:51:29 PM
1class Solution {
2public:
3    long long maxTotalValue(vector<int>& nums, int k) {
4
5        long long mn = *min_element(nums.begin(), nums.end());
6        long long mx = *max_element(nums.begin(), nums.end());
7
8        return 1LL * k * (mx - mn);
9    }
10};