// Last updated: 28/05/2026, 14:00:22
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int nt = nums .size ( ) ; 
        vector<int> ans(nt) ;
        int p = 0 ; 
        int n =1 ; 
        for ( int num : nums ) { 
            if ( num>0 ) { 
                ans[p] = num ; 
                p+=2;
            }
            else { 
                ans[n] = num ; 
                n+=2;
            }

        }
        return ans; 
    }
};