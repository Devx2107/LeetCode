// Last updated: 6/1/2026, 2:00:05 PM
1class Solution {
2public:
3    int minimumCost(vector<int>& cost) {
4        sort(cost.begin(), cost.end(), greater<int>());
5        int ans = 0;
6        for(int i = 0; i < cost.size(); i++) {
7            if(i % 3 != 2) ans += cost[i];
8        }
9        return ans;
10    }
11};