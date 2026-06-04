// Last updated: 6/4/2026, 7:44:03 PM
1class Solution {
2public:
3    string maxSumOfSquares(int num, int sum) {
4        if(sum > 9LL * num) return "";
5        string ans;
6        for(int i = 0; i < num; i++) {
7            int left = num - i - 1;
8            for(int d = 9; d >= 0; d--) {
9                int rem = sum - d;
10                if(rem < 0) continue;
11                if(rem <= 9LL * left) {
12                    ans.push_back('0' + d);
13                    sum = rem;
14                    break;
15                }
16            }
17        }
18        return ans;
19    }
20};