// Last updated: 5/25/2026, 10:02:31 PM
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        int n = nums .size () ;
5        int count = 0 ;
6        for ( int i = 0 ; i< n ;i ++ ) {
7            if  (nums [ i ]  > nums [(i+1)%n]) count++ ; 
8        }
9        return (count <=1 )  ;
10    }
11};