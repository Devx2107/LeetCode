// Last updated: 6/5/2026, 9:48:03 PM
1class Solution {
2public:
3    struct Node {
4        long long cnt;
5        long long wav;
6    };
7
8    string s;
9
10    Node dp[16][2][2][11][11];
11    bool vis[16][2][2][11][11];
12
13    Node dfs(int pos, int tight, int started, int prev2, int prev1) {
14
15        if (pos == s.size()) {
16            return {1, 0};
17        }
18
19        if (vis[pos][tight][started][prev2][prev1])
20            return dp[pos][tight][started][prev2][prev1];
21
22        vis[pos][tight][started][prev2][prev1] = true;
23
24        Node res = {0, 0};
25
26        int lim = tight ? s[pos] - '0' : 9;
27
28        for (int d = 0; d <= lim; d++) {
29
30            int ntight = tight && (d == lim);
31
32            if (!started && d == 0) {
33
34                Node child = dfs(pos + 1, ntight, 0, 10, 10);
35
36                res.cnt += child.cnt;
37                res.wav += child.wav;
38            } else {
39
40                int nprev2 = prev2;
41                int nprev1 = prev1;
42
43                long long add = 0;
44
45                if (!started) {
46
47                    nprev2 = 10;
48                    nprev1 = d;
49                } else if (prev2 == 10) {
50
51                    nprev2 = prev1;
52                    nprev1 = d;
53                } else {
54
55                    if ((prev1 > prev2 && prev1 > d) ||
56                        (prev1 < prev2 && prev1 < d))
57                        add = 1;
58
59                    nprev2 = prev1;
60                    nprev1 = d;
61                }
62
63                Node child = dfs(pos + 1, ntight, 1, nprev2, nprev1);
64
65                res.cnt += child.cnt;
66                res.wav += child.wav + add * child.cnt;
67            }
68        }
69
70        return dp[pos][tight][started][prev2][prev1] = res;
71    }
72
73    long long solve(long long x) {
74
75        if (x <= 0)
76            return 0;
77
78        s = to_string(x);
79
80        memset(vis, 0, sizeof(vis));
81
82        Node ans = dfs(0, 1, 0, 10, 10);
83
84        return ans.wav;
85    }
86
87    long long totalWaviness(long long num1, long long num2) {
88
89        return solve(num2) - solve(num1 - 1);
90    }
91};