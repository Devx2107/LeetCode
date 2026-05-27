// Last updated: 5/27/2026, 1:40:51 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int profit = 0;
5
6        for (int i = 1; i < (prices.size()); ++i) {
7            if (prices[i] > prices[i - 1]) {
8                profit += prices[i] - prices[i - 1];
9            }
10        }
11
12        return profit;
13    }
14};