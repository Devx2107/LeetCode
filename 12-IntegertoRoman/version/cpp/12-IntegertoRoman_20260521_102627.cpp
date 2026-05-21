// Last updated: 5/21/2026, 10:26:27 AM
1class Solution {
2public:
3    string intToRoman(int num) {
4
5        vector<int> values = { 1000,900,500,400,100,90,50,40, 10,9,5,4,1 };
6
7        vector<string> symbols = { "M","CM","D","CD","C","XC","L","XL", "X","IX","V","IV","I" };
8
9        string ans = "";
10
11        for(int i = 0; i < values.size(); i++) {
12
13            while(num >= values[i]) {
14                ans += (string)symbols[i];
15                num -= values[i];
16            }
17        }
18        return ans;
19    }
20};