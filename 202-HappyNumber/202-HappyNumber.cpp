// Last updated: 21/05/2026, 18:12:14
class Solution {
public:
    int next(int n) {
        int sum = 0;
        while(n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        
        unordered_set<int> seen;

        while(n != 1) {
            
            if(seen.count(n))
                return false;

            seen.insert(n);
            n = next(n);
        }

        return true;
    }
};