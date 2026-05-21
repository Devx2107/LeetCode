// Last updated: 21/05/2026, 18:14:22
class Solution {
public:
    bool isPalindrome (int x){
        if (x<0) return false;
        long long og = x;
        long long rev = 0;
        while (x>0){
            int rem  = x%10;
            rev = rev*10 + rem;
            x/=10;

        }
        return og == rev;

    }
};