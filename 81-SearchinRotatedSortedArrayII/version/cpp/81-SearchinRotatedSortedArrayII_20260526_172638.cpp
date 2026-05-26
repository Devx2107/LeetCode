// Last updated: 5/26/2026, 5:26:38 PM
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4
5        int l = 0;
6        int r = nums.size() - 1;
7
8        while(l <= r) {
9
10            int mid = l + (r-l)/2;
11
12            if(nums[mid] == target)
13                return true;
14
15            if(nums[l] == nums[mid] &&
16               nums[mid] == nums[r]) {
17
18                l++;
19                r--;
20            }
21
22            else if(nums[l] <= nums[mid]) {
23
24                if(target >= nums[l] &&
25                   target < nums[mid]) {
26
27                    r = mid - 1;
28                }
29                else {
30                    l = mid + 1;
31                }
32            }
33
34            else {
35
36                if(target > nums[mid] &&
37                   target <= nums[r]) {
38
39                    l = mid + 1;
40                }
41                else {
42                    r = mid - 1;
43                }
44            }
45        }
46
47        return false;
48    }
49};