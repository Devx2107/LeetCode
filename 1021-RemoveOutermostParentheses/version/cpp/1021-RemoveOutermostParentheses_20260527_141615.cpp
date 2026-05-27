// Last updated: 5/27/2026, 2:16:15 PM
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4
5        string ans;
6        int depth = 0;
7        for(char c : s) {
8            if(c == '(') {
9                if(depth > 0)
10                    ans += c;
11                depth++;
12            }
13            else {
14                depth--;
15                if(depth > 0)
16                    ans += c;
17            }
18        }
19        return ans;
20    }
21};