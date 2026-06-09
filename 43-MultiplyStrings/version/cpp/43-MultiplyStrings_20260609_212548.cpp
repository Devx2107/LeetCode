// Last updated: 6/9/2026, 9:25:48 PM
1class Solution {
2public:
3    string multiply(string num1, string num2) {
4
5        if (num1 == "0" || num2 == "0") return "0";
6        int n = num1.size();
7        int m = num2.size();
8        vector<int> res(n + m, 0);
9        for (int i = n - 1; i >= 0; i--) {
10            for (int j = m - 1; j >= 0; j--) {
11                int mul = (num1[i] - '0') * (num2[j] - '0');
12                int p1 = i + j;
13                int p2 = i + j + 1;
14                int sum = mul + res[p2];
15                res[p2] = sum % 10;
16                res[p1] += sum / 10;
17            }
18        }
19        string ans;
20        for (int x : res) {
21            if (ans.empty() && x == 0) continue;
22            ans.push_back(x + '0');
23        }
24        return ans;
25    }
26};