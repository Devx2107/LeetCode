// Last updated: 5/26/2026, 2:22:25 PM
1class Solution {
2public:
3
4    int firstPos(vector<int>& nums, int target) {
5
6        int l = 0, r = nums.size()-1;
7        int ans = -1;
8
9        while(l <= r) {
10
11            int mid = l + (r-l)/2;
12
13            if(nums[mid] == target) {
14                ans = mid;
15                r = mid - 1; 
16            }
17
18            else if(nums[mid] < target) {
19                l = mid + 1;
20            }
21
22            else {
23                r = mid - 1;
24            }
25        }
26
27        return ans;
28    }
29
30    int lastPos(vector<int>& nums, int target) {
31
32        int l = 0, r = nums.size()-1;
33        int ans = -1;
34
35        while(l <= r) {
36
37            int mid = l + (r-l)/2;
38
39            if(nums[mid] == target) {
40                ans = mid;
41                l = mid + 1; 
42            }
43
44            else if(nums[mid] < target) {
45                l = mid + 1;
46            }
47
48            else {
49                r = mid - 1;
50            }
51        }
52
53        return ans;
54    }
55
56    vector<int> searchRange(vector<int>& nums, int target) {
57
58        return {firstPos(nums, target), lastPos(nums, target)};
59    }
60};