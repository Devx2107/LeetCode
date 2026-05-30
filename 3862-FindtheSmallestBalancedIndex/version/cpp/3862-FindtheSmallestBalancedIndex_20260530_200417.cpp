// Last updated: 5/30/2026, 8:04:17 PM
1class Solution {
2public:
3    int smallestBalancedIndex(vector<int>& nums) {
4
5        long long totalSum = 0;
6
7        for(int x : nums)
8            totalSum += x;
9
10        long long leftSum = totalSum;
11
12        const long long LIMIT = 100000000000000LL + 5; // 1e14 + 5
13
14        long long suffixProduct = 1;
15
16        int n = nums.size();
17
18        for(int i = n - 1; i >= 0; i--) {
19
20            leftSum -= nums[i];
21
22            if(leftSum == suffixProduct)
23                return i;
24
25            if(suffixProduct > LIMIT / nums[i])
26                suffixProduct = LIMIT;
27            else
28                suffixProduct *= nums[i];
29        }
30
31        return -1;
32    }
33};