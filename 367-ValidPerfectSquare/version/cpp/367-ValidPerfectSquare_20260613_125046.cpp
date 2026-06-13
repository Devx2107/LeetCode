// Last updated: 6/13/2026, 12:50:46 PM
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4
5        long long l = 1;
6        long long r = num;
7
8        while (l <= r) {
9
10            long long mid = l + (r - l) / 2;
11
12            long long sq = mid * mid;
13
14            if (sq == num)
15                return true;
16
17            if (sq < num)
18                l = mid + 1;
19            else
20                r = mid - 1;
21        }
22
23        return false;
24    }
25};