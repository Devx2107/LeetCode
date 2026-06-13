// Last updated: 6/13/2026, 1:34:50 PM
1class Solution {
2public:
3    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
4        int states = minutesToTest / minutesToDie + 1;
5        int pigs = 0;
6        long long canTest = 1;
7        while (canTest < buckets) {
8            pigs++;
9            canTest *= states;
10        }
11        return pigs;
12    }
13};