// Last updated: 21/05/2026, 18:10:59
class Solution {
public:
    string fractionAddition(string expression) {
        int num = 0, den = 1; //0/1
        for(int i = 0; i < expression.size();) {
            int sign = 1;
            if(expression[i] == '+' || expression[i] == '-') {
                sign = (expression[i] == '-') ? -1 : 1;
                i++;
            }
            int n = 0;
            while(isdigit(expression[i])) {
                n = n * 10 + (expression[i++] - '0');
            }
            n *= sign;
            i++;
            int d = 0;
            while(i < expression.size() && isdigit(expression[i])) {
                d = d * 10 + (expression[i++] - '0');
            }
            num = num * d + den * n;
            den = den * d;

            int g = __gcd(abs(num), abs(den));
            num /= g;
            den /= g;
        }
        return to_string(num) + "/" + to_string(den);
    }
};