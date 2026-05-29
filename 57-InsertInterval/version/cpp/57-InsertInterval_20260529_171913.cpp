// Last updated: 5/29/2026, 5:19:13 PM
1class Solution {
2public:
3    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
4        vector<vector<int>> ans;
5        for(auto interval : intervals) {
6            if(interval[1] < newInterval[0]) {
7                ans.push_back(interval);
8            }
9            else if(interval[0] > newInterval[1]) {
10                ans.push_back(newInterval);
11                newInterval = interval;
12            }
13            else {
14                newInterval[0] = min(newInterval[0], interval[0]);
15                newInterval[1] = max(newInterval[1], interval[1]);
16            }
17        }
18        ans.push_back(newInterval);
19        return ans;
20    }
21};