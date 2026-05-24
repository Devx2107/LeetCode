// Last updated: 5/24/2026, 4:09:35 PM
1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4
5        unordered_map<int,int> mp;
6
7        mp[0] = -1;
8
9        int prefix = 0;
10
11        for(int i = 0; i < nums.size(); i++) {
12
13            prefix += nums[i];
14
15            int rem = prefix % k;
16
17            if(mp.count(rem)) {
18
19                if(i - mp[rem] >= 2)
20                    return true;
21            }
22
23            else {
24                mp[rem] = i;
25            }
26        }
27
28        return false;
29    }
30};