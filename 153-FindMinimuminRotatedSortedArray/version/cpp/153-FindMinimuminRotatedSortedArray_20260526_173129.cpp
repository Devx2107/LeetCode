// Last updated: 5/26/2026, 5:31:29 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int min1 = nums[ 0 ] ; 
5        int n = nums.size () ; 
6        for ( int i = 0 ; i <n ; i ++ ) { 
7            if ( nums[i]< min1) min1 = nums[i];
8        }
9        return min1;
10        
11    }
12};