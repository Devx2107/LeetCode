// Last updated: 21/05/2026, 18:11:11
class Solution {
public:
    int arrangeCoins(int n) {
        int row = 0 ;
        while (n>= row+1){
            row ++;
            n = n- row ;

        }
        return row;
    }
};