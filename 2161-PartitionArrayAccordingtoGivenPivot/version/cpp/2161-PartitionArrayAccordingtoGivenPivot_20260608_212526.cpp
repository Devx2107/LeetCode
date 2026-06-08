// Last updated: 6/8/2026, 9:25:26 PM
1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        vector<int> less;
5        vector<int> equal;
6        vector<int> greater;
7        for(int x : nums) {
8            if(x < pivot) less.push_back(x);
9            else if(x == pivot) equal.push_back(x);
10            else greater.push_back(x);
11        }
12        vector<int> ans;
13        for(int x : less) ans.push_back(x);
14        for(int x : equal) ans.push_back(x);
15        for(int x : greater) ans.push_back(x);
16        return ans;
17    }
18};