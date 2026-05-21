// Last updated: 5/21/2026, 2:11:26 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4
5        int n = matrix.size();
6
7        for(int i = 0; i < n; i++) {
8            for(int j = i+1; j < n; j++) {
9                swap(matrix[i][j], matrix[j][i]);
10            }
11        }
12
13        for(int i = 0; i < n; i++) {
14            reverse(matrix[i].begin(), matrix[i].end());
15        }
16    }
17};