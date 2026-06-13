// Last updated: 6/13/2026, 12:57:58 PM
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> a(n);
5        for(int i = 1; i <= n; i++) {
6            if(i % 3 == 0 && i % 5 == 0) a[i-1] = "FizzBuzz";
7            else if(i % 3 == 0) a[i-1] = "Fizz";
8            else if(i % 5 == 0) a[i-1] = "Buzz";
9            else a[i-1] = to_string(i);
10        }
11        return a;
12    }
13};