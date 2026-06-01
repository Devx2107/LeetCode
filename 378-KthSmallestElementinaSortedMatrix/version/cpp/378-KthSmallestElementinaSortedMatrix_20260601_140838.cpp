// Last updated: 6/1/2026, 2:08:38 PM
1class Solution {
2public:
3    int countLessEqual(vector<vector<int>>& matrix,int mid) {
4        int n = matrix.size();
5        int row = n - 1;
6        int col = 0;
7        int count = 0;
8        while(row >= 0 && col < n) {
9            if(matrix[row][col] <= mid) {
10                count += row + 1;
11                col++;
12            }
13            else {
14                row--;
15            }
16        }
17        return count;
18    }
19
20    int kthSmallest(vector<vector<int>>& matrix,int k) {
21        int n = matrix.size();
22        int l = matrix[0][0];
23        int r = matrix[n-1][n-1];
24
25        while(l < r) {
26            int mid = l + (r-l)/2;
27            if(countLessEqual(matrix, mid) < k)
28                l = mid + 1;
29            else
30                r = mid;
31        }
32        return l;
33    }
34};