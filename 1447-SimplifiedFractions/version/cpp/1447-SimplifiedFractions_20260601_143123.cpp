// Last updated: 6/1/2026, 2:31:23 PM
1class Solution {
2public:
3    vector<string> simplifiedFractions(int n) {
4        vector<string> ans;
5        for(int den = 2; den <= n; den++) {
6            for(int num = 1; num < den; num++) {
7                if(__gcd(num, den) == 1) {
8                    ans.push_back( to_string(num) + "/" + to_string(den));
9                }
10            }
11        }
12        return ans;
13    }
14};