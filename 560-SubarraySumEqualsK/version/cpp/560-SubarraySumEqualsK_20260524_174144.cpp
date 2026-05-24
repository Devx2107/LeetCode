// Last updated: 5/24/2026, 5:41:44 PM
1class Solution {
2public:
3    int numSubarraysWithSum(vector<int>& nums, int goal) {
4
5        unordered_map<int,int> mp;
6
7        mp[0] = 1;
8
9        int prefix = 0;
10        int count = 0;
11
12        for(int num : nums) {
13            prefix += num;
14            if(mp.count(prefix - goal)) {
15                count += mp[prefix - goal];
16            }
17            mp[prefix]++;
18        }
19        return count;
20    }
21};