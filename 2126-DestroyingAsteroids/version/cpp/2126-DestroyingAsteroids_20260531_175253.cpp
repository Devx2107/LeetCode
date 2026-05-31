// Last updated: 5/31/2026, 5:52:53 PM
1class Solution {
2public:
3    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
4        sort(asteroids.begin(), asteroids.end());
5        long long currMass = mass;
6        for(int asteroid : asteroids) {
7            if(currMass < asteroid) return false;
8            currMass += asteroid;
9        }
10        return true;
11    }
12};