// Last updated: 6/7/2026, 10:18:07 PM
1class Solution {
2public:
3    vector<string> ans;
4
5    void dfs(int open, int close, int n, string curr) {
6
7        if (curr.size() == 2 * n) {
8            ans.push_back(curr);
9            return;
10        }
11
12        if (open < n) {
13            dfs(open + 1, close, n, curr + '(');
14        }
15
16        if (close < open) {
17            dfs(open, close + 1, n, curr + ')');
18        }
19    }
20
21    vector<string> generateParenthesis(int n) {
22
23        dfs(0, 0, n, "");
24
25        return ans;
26    }
27};