// Last updated: 5/30/2026, 1:26:33 PM
1
2class Solution {
3public:
4    int minOperations(string s) {
5        string t = s;
6        sort(t.begin(), t.end());
7
8        if(s == t) return 0;
9        int n = s.size();
10        if(n == 2) return -1;
11
12        char mn = *min_element(s.begin(), s.end());
13        char mx = *max_element(s.begin(), s.end());
14
15        if(s[0] == mn || s[n-1] == mx) return 1;
16        for(int i = 1; i < n-1; i++) {
17            if(s[i] == mn || s[i] == mx) return 2;
18        }
19        return 3;
20    }
21};