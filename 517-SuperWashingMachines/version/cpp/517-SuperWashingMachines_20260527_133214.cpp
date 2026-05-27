// Last updated: 5/27/2026, 1:32:14 PM
1class Solution {
2public:
3    int findMinMoves(vector<int>& machines) {
4        int total = accumulate(machines.begin(), machines.end(), 0);
5        int n = machines.size();
6        if(total % n != 0) return -1;
7
8        int target = total / n;
9        int balance = 0;
10        int ans = 0;
11
12        for(int x : machines) {
13            int diff = x - target;
14            balance += diff;
15            ans = max(ans, max(abs(balance), diff));
16        }
17        return ans;
18    }
19};