// Last updated: 21/05/2026, 18:14:24
class Solution {
public:
    int myAtoi(string s) {
        
        int i = 0, n = s.size();

        while(i < n && s[i] == ' ')
            i++;

        int sign = 1;
        if(i < n && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-') sign = -1;
            i++;
        }
        long res = 0;

        while(i < n && isdigit(s[i])) {
            
            int digit = s[i] - '0';
            res = res * 10 + digit;
            if(sign * res >= INT_MAX) return INT_MAX;
            if(sign * res <= INT_MIN) return INT_MIN;

            i++;
        }

        return sign * res;
    }
};