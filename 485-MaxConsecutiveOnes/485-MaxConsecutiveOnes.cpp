// Last updated: 28/05/2026, 14:01:09
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums .size () ;
        int msf = 0 , curr = 0 ; 
        for ( int i = 0 ; i < n ; i++ ) { 
            if ( nums[i] == 1 ) { 
                curr++ ; 
                msf = max ( msf , curr);
            }
            else { 
                curr = 0 ;
            }
        }
        return msf ;
        
    }
};