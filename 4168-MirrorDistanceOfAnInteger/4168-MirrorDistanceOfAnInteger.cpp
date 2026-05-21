// Last updated: 21/05/2026, 18:10:08
class Solution {
public:
    int mirrorDistance(int n) {
        
        int original = n;
        int rev = 0;

        while(n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }

        return abs(original - rev);
    }
};