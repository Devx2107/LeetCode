// Last updated: 5/25/2026, 10:23:20 PM
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        int nt = nums .size ( ) ; 
5        vector<int> ans(nt) ;
6        int p = 0 ; 
7        int n =1 ; 
8        for ( int num : nums ) { 
9            if ( num>0 ) { 
10                ans[p] = num ; 
11                p+=2;
12            }
13            else { 
14                ans[n] = num ; 
15                n+=2;
16            }
17
18        }
19        return ans; 
20    }
21};