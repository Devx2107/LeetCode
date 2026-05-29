// Last updated: 5/29/2026, 5:32:03 PM
1class Solution {
2public:
3    
4    static bool cmp(vector<int>& a, vector<int>& b){
5        return a[1] < b[1];
6    }
7
8    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
9
10        sort(intervals.begin(), intervals.end(), cmp);
11
12        int count = 0;
13
14        int prevEnd = intervals[0][1];
15
16        for(int i = 1; i < intervals.size(); i++) {
17
18            if(intervals[i][0] < prevEnd) {
19                count++;
20            }
21            else {
22                prevEnd = intervals[i][1];
23            }
24        }
25
26        return count;
27    }
28};