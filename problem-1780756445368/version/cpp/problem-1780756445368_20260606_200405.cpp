// Last updated: 6/6/2026, 8:04:05 PM
1class Solution {
2public:
3    bool consecutiveSetBits(int n) {
4        int cnt = 0 ; 
5        while ( n >1 ) {
6            if  ( ( n&1) && ((n>>1)&1) ) cnt ++ ;
7            n >>= 1 ; 
8            
9        }
10        return cnt == 1 ;
11    }
12};