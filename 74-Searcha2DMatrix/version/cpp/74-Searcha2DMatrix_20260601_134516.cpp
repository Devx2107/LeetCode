// Last updated: 6/1/2026, 1:45:16 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4
5        int n = matrix.size();
6        int m = matrix[0].size();
7
8        int l = 0;
9        int r = n * m - 1;
10
11        while(l <= r) {
12
13            int mid = l + (r - l) / 2;
14
15            int row = mid / m;
16            int col = mid % m;
17
18            int val = matrix[row][col];
19
20            if(val == target)
21                return true;
22
23            if(val < target)
24                l = mid + 1;
25            else
26                r = mid - 1;
27        }
28
29        return false;
30    }
31};