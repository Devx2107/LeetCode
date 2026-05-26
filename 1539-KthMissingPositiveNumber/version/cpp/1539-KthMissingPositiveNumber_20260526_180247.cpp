// Last updated: 5/26/2026, 6:02:47 PM
1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4
5        int l = 0;
6        int r = arr.size() - 1;
7
8        while(l <= r) {
9
10            int mid = l + (r-l)/2;
11
12            int missing = arr[mid] - mid - 1;
13
14            if(missing < k) {
15                l = mid + 1;
16            }
17            else {
18                r = mid - 1;
19            }
20        }
21
22        return l + k;
23    }
24};