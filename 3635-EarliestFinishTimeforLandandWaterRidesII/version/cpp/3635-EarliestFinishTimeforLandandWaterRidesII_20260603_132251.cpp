// Last updated: 6/3/2026, 1:22:51 PM
1class Solution {
2public:
3    int earliestFinishTime(vector<int>& startL, vector<int>& durL, vector<int>& startW, vector<int>& durW) {
4        int n = startL.size(), m = startW.size();
5        int minLand = INT_MAX,minWater = INT_MAX;
6        int result = INT_MAX;
7
8        for (int i = 0; i < n; i++) {
9            minLand = min(minLand, startL[i] + durL[i]);
10        }
11        for (int i = 0; i < m; i++) {
12            minWater = min(minWater, startW[i] + durW[i]);
13        }
14        for (int i = 0; i < n; i++) {
15            result = min(result, max(minWater, startL[i]) + durL[i]);
16        }
17        for (int i = 0; i < m; i++) {
18            result = min(result, max(minLand, startW[i]) + durW[i]);
19        }
20        return result;
21    }
22};