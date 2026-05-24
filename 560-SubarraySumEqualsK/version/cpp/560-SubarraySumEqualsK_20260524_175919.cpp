// Last updated: 5/24/2026, 5:59:19 PM
1class Solution {
2public:
3    int findMaxLength(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        mp[0] = -1;
6
7        int prefix = 0;
8        int maxi = 0;
9
10        for(int i = 0; i < nums.size(); i++) {
11
12            if(nums[i] == 0)
13                prefix += -1;
14            else
15                prefix += 1;
16
17            if(mp.count(prefix)) {
18                maxi = max(maxi,
19                           i - mp[prefix]);
20            }
21            else {
22                mp[prefix] = i;
23            }
24        }
25        return maxi;
26    }
27};