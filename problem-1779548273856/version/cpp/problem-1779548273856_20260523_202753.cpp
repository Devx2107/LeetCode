// Last updated: 5/23/2026, 8:27:53 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        int ans = INT_MAX;
5        for (int x = 0 ; x< k ; x++) {
6            for ( int y = 0 ; y < k ; y++) {
7                if  ( x == y ) continue ; 
8                int op = 0 ;
9                for ( int i = 0 ; i < nums.size() ; i ++ ) {
10                    int rem = nums[i]%k;
11                    int target = ( i%2 == 0 ) ? x : y;
12                    int dif = abs ( rem - target);
13                    op = op + min ( dif , k - dif);
14                }
15                ans = min ( ans , op);
16            }
17        }
18        return ans;
19    }
20};