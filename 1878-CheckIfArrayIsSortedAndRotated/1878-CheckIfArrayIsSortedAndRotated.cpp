// Last updated: 28/05/2026, 14:00:27
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums .size () ;
        int count = 0 ;
        for ( int i = 0 ; i< n ;i ++ ) {
            if  (nums [ i ]  > nums [(i+1)%n]) count++ ; 
        }
        return (count <=1 )  ;
    }
};