// Last updated: 5/30/2026, 9:31:03 PM
1class Solution {
2public:
3    int orangesRotting(vector<vector<int>>& grid) {
4
5        int n = grid.size();
6        int m = grid[0].size();
7
8        queue<pair<int,int>> q;
9
10        int fresh = 0;
11
12        for(int i = 0; i < n; i++) {
13
14            for(int j = 0; j < m; j++) {
15
16                if(grid[i][j] == 2)
17                    q.push({i,j});
18
19                else if(grid[i][j] == 1)
20                    fresh++;
21            }
22        }
23
24        int minutes = 0;
25
26        vector<int> dr = {-1,1,0,0};
27        vector<int> dc = {0,0,-1,1};
28
29        while(!q.empty() && fresh > 0) {
30
31            int size = q.size();
32
33            minutes++;
34
35            for(int k = 0; k < size; k++) {
36
37                auto [r,c] = q.front();
38                q.pop();
39
40                for(int d = 0; d < 4; d++) {
41
42                    int nr = r + dr[d];
43                    int nc = c + dc[d];
44
45                    if(nr >= 0 && nr < n &&
46                       nc >= 0 && nc < m &&
47                       grid[nr][nc] == 1) {
48
49                        grid[nr][nc] = 2;
50
51                        fresh--;
52
53                        q.push({nr,nc});
54                    }
55                }
56            }
57        }
58
59        return fresh == 0 ? minutes : -1;
60    }
61};