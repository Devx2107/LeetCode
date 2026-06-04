// Last updated: 6/4/2026, 7:23:43 PM
1class Solution {
2public:
3    int waviness(int x) {
4        string s = to_string(x);
5        int cnt = 0;
6        for(int i = 1; i + 1 < s.size(); i++) {
7            bool peak = s[i] > s[i-1] && s[i] > s[i+1];
8            bool valley = s[i] < s[i-1] && s[i] < s[i+1];
9            if(peak || valley) cnt++;
10        }
11        return cnt;
12    }
13    int totalWaviness(int num1, int num2) {
14        int ans = 0;
15        for(int x = num1; x <= num2; x++) {
16            ans += waviness(x);
17        }
18        return ans;
19    }
20};