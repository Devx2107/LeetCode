// Last updated: 6/7/2026, 9:40:28 PM
1class Solution {
2public:
3    vector<string> ans;
4
5    vector<string> mp = {"",    "",    "abc",  "def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz"};
6
7    void dfs(int idx, string& digits, string curr) {
8        if (idx == digits.size()) {
9            ans.push_back(curr);
10            return;
11        }
12
13        string letters = mp[digits[idx] - '0'];
14
15        for (char ch : letters) {
16            dfs(idx + 1, digits, curr + ch);
17        }
18    }
19
20    vector<string> letterCombinations(string digits) {
21        if (digits.empty())
22            return {};
23        dfs(0, digits, "");
24        return ans;
25    }
26};