// Last updated: 5/25/2026, 10:09:34 PM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int n = nums .size () ;
5        int msf = 0 , curr = 0 ; 
6        for ( int i = 0 ; i < n ; i++ ) { 
7            if ( nums[i] == 1 ) { 
8                curr++ ; 
9                msf = max ( msf , curr);
10            }
11            else { 
12                curr = 0 ;
13            }
14        }
15        return msf ;
16        
17    }
18};