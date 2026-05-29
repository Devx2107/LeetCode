// Last updated: 5/29/2026, 5:03:02 PM
1class Solution {
2public:
3    int dSum(int n) {
4        int sum = 0;
5        while(n) {
6            sum += n % 10;
7            n /= 10;
8        }
9        return sum;
10    }
11
12    int minElement(vector<int>& nums) {
13        int ans = INT_MAX;
14        for(int x : nums) ans = min(ans, dSum(x));
15        return ans;
16    }
17};