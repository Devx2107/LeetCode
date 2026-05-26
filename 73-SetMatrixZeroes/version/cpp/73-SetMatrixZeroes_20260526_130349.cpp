// Last updated: 5/26/2026, 1:03:49 PM
1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4        
5        int m = matrix.size();
6        int n = matrix[0].size();
7        bool firstRow = false, firstCol = false;
8
9        for(int j = 0; j < n; j++) if(matrix[0][j] == 0) firstRow = true;
10        for(int i = 0; i < m; i++) if(matrix[i][0] == 0) firstCol = true;
11
12        for(int i = 1; i < m; i++) {
13            for(int j = 1; j < n; j++) {
14                if(matrix[i][j] == 0) {
15                    matrix[i][0] = 0;
16                    matrix[0][j] = 0;
17                }
18            }
19        }
20
21        for(int i = 1; i < m; i++) {
22            for(int j = 1; j < n; j++) {
23                if(matrix[i][0] == 0 || matrix[0][j] == 0)
24                    matrix[i][j] = 0;
25            }
26        }
27
28        if(firstRow) {
29            for(int j = 0; j < n; j++)
30                matrix[0][j] = 0;
31        }
32
33        if(firstCol) {
34            for(int i = 0; i < m; i++)
35                matrix[i][0] = 0;
36        }
37    }
38};