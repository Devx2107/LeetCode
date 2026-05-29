// Last updated: 5/29/2026, 5:06:36 PM
1class Solution {
2public:
3    int integerReplacement(int n) {
4        long long x = n;
5        int steps = 0;
6        while(x != 1) {
7            if(x % 2 == 0) x /= 2;
8            else {
9                if(x == 3) x--;
10                else if((x & 3) == 3) x++;
11                else x--;
12            }
13            steps++;
14        }
15        return steps;
16    }
17};