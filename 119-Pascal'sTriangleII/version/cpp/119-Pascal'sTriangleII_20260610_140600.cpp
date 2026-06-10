// Last updated: 6/10/2026, 2:06:00 PM
1class Solution {
2public:
3    vector<int> getRow(int rowIndex) {
4        vector<int> row = {1};
5        for (int i = 1; i <= rowIndex; i++) {
6            vector<int> newRow(i + 1, 1);
7            for (int j = 1; j < i; j++) {
8                newRow[j] = row[j - 1] + row[j];
9            }
10            row = newRow;
11        }
12        return row;
13    }
14};