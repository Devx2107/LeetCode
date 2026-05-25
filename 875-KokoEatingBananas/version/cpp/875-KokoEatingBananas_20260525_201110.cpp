// Last updated: 5/25/2026, 8:11:10 PM
1class Solution {
2public:
3    int shipWithinDays(vector<int>& weights, int days) {
4        int maxWeight = -1, totalWeight = 0;
5        for (int weight : weights) {
6            maxWeight = max(maxWeight, weight);
7            totalWeight = totalWeight + weight;
8        }
9        while (maxWeight < totalWeight) {
10            int midWeight = maxWeight + (totalWeight - maxWeight) / 2;
11            int daysNeeded = 1, currWeight = 0;
12            for (int weight : weights) {
13                if (currWeight + weight > midWeight) {
14                    daysNeeded++;
15                    currWeight = 0;
16                }
17                currWeight = currWeight + weight;
18            }
19            if (daysNeeded > days) {
20                maxWeight = midWeight + 1;
21            } else {
22                totalWeight = midWeight;
23            }
24        }
25        return maxWeight;
26    }
27};