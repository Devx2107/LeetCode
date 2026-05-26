// Last updated: 5/26/2026, 5:47:49 PM
1class Solution {
2public:
3    int minFlips(string target) {
4        int flips = 0;
5        char curr = '0';
6        for(char c : target) {
7            if(c != curr) {
8                flips++;
9                curr = c;
10            }
11        }
12        return flips;
13    }
14};