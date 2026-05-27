// Last updated: 5/27/2026, 1:24:11 PM
1class Solution {
2public:
3
4    int count = 0;
5
6    void solve(int row,
7               int n,
8               unordered_set<int>& col,
9               unordered_set<int>& diag,
10               unordered_set<int>& antiDiag) {
11
12        if(row == n) {
13            count++;
14            return;
15        }
16
17        for(int c = 0; c < n; c++) {
18
19            if(col.count(c) ||
20               diag.count(row-c) ||
21               antiDiag.count(row+c)) {
22
23                continue;
24            }
25
26            col.insert(c);
27            diag.insert(row-c);
28            antiDiag.insert(row+c);
29
30            solve(row+1, n,
31                  col, diag, antiDiag);
32
33            col.erase(c);
34            diag.erase(row-c);
35            antiDiag.erase(row+c);
36        }
37    }
38
39    int totalNQueens(int n) {
40
41        unordered_set<int> col, diag, antiDiag;
42
43        solve(0, n, col, diag, antiDiag);
44
45        return count;
46    }
47};