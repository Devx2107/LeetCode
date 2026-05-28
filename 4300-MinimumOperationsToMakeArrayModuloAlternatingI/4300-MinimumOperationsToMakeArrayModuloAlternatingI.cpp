// Last updated: 28/05/2026, 14:00:10
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = INT_MAX;
        for (int x = 0 ; x< k ; x++) {
            for ( int y = 0 ; y < k ; y++) {
                if  ( x == y ) continue ; 
                int op = 0 ;
                for ( int i = 0 ; i < nums.size() ; i ++ ) {
                    int rem = nums[i]%k;
                    int target = ( i%2 == 0 ) ? x : y;
                    int dif = abs ( rem - target);
                    op = op + min ( dif , k - dif);
                }
                ans = min ( ans , op);
            }
        }
        return ans;
    }
};