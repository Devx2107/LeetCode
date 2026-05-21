// Last updated: 21/05/2026, 18:12:26
class Solution {
public:
    int trailingZeroes(int n) {
        int count =0;
        while (n>0){
            n = n/5;
            count += n;
        }
    return count ;    
    }

};