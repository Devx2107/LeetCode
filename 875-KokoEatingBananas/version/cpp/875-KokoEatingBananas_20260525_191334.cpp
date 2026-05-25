// Last updated: 5/25/2026, 7:13:34 PM
1class Solution {
2public:
3
4    bool canFinish(vector<int>& piles, int h, int speed) {
5
6        long long hours = 0;
7        for(int pile : piles) {
8            hours += (pile + speed - 1) / speed;
9        }
10        return hours <= h;
11    }
12
13    int minEatingSpeed(vector<int>& piles, int h) {
14        int low = 1;
15        int high = *max_element(piles.begin(),piles.end());
16        int ans = high;
17        while(low <= high) {
18            int mid = low + (high-low)/2;
19            if(canFinish(piles, h, mid)) {
20                ans = mid;
21                high = mid - 1;
22            }
23            else {
24                low = mid + 1;
25            }
26        }
27        return ans;
28    }
29};