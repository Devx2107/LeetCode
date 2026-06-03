// Last updated: 6/3/2026, 2:05:09 PM
1class Solution {
2public:
3    int partitionDisjoint(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> prefMax(n);
6        vector<int> suffMin(n);
7        prefMax[0] = nums[0];
8        for(int i = 1; i < n; i++) {
9            prefMax[i] = max(prefMax[i-1], nums[i]);
10        }
11        suffMin[n-1] = nums[n-1];
12        for(int i = n-2; i >= 0; i--) {
13            suffMin[i] =min(suffMin[i+1], nums[i]);
14        }
15        for(int i = 0; i < n-1; i++) {
16            if(prefMax[i] <= suffMin[i+1]) return i + 1;
17        }
18        return n;
19    }
20};