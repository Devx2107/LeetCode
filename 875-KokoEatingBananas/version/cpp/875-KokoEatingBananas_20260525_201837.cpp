// Last updated: 5/25/2026, 8:18:37 PM
1class Solution {
2public:
3
4    bool canDivide(vector<int>& nums, int threshold, int divisor) {
5        int sum = 0;
6
7        for(int num : nums) {
8            sum += (num + divisor - 1) / divisor;
9        }
10        return sum <= threshold;
11    }
12
13    int smallestDivisor(vector<int>& nums,  int threshold) {
14        int low = 1;
15        int high = *max_element(nums.begin(), nums.end());
16        int ans = high;
17
18        while(low <= high) {
19            int mid = low + (high-low)/2;
20            if(canDivide(nums, threshold, mid)) {
21                ans = mid;
22                high = mid - 1;
23            }
24
25            else {
26                low = mid + 1;
27            }
28        }
29
30        return ans;
31    }
32};