// Last updated: 6/8/2026, 9:30:34 PM
1class Solution {
2public:
3    vector<vector<int>> ans;
4
5    void dfs(int start, int n, int k, vector<int>& curr) {
6        if (curr.size() == k) {
7            ans.push_back(curr);
8            return;
9        }
10
11        for (int i = start; i <= n; i++) {
12            curr.push_back(i);
13
14            dfs(i + 1, n, k, curr);
15
16            curr.pop_back();
17        }
18    }
19
20    vector<vector<int>> combine(int n, int k) {
21
22        vector<int> curr;
23
24        dfs(1, n, k, curr);
25
26        return ans;
27    }
28};