// Last updated: 21/05/2026, 18:10:43
class Solution {
public:
    int fib(int n) {
        if (n<=1) return n;
        return fib(n-1)+ fib(n-2);  
    }
};