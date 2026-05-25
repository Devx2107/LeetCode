// Last updated: 5/25/2026, 8:35:52 PM
1class Solution {
2public:
3
4    bool canMake(vector<int>& bloomDay,
5                 int m,
6                 int k,
7                 int day) {
8
9        int bouquets = 0;
10        int flowers = 0;
11
12        for(int bloom : bloomDay) {
13
14            if(bloom <= day) {
15
16                flowers++;
17
18                if(flowers == k) {
19
20                    bouquets++;
21
22                    flowers = 0;
23                }
24            }
25
26            else {
27
28                flowers = 0;
29            }
30        }
31
32        return bouquets >= m;
33    }
34
35    int minDays(vector<int>& bloomDay,
36                int m,
37                int k) {
38
39        long long totalNeeded = 1LL * m * k;
40
41        if(totalNeeded > bloomDay.size())
42            return -1;
43
44        int low = *min_element(bloomDay.begin(),
45                               bloomDay.end());
46
47        int high = *max_element(bloomDay.begin(),
48                                bloomDay.end());
49
50        int ans = high;
51
52        while(low <= high) {
53
54            int mid = low + (high-low)/2;
55
56            if(canMake(bloomDay, m, k, mid)) {
57
58                ans = mid;
59
60                high = mid - 1;
61            }
62
63            else {
64
65                low = mid + 1;
66            }
67        }
68
69        return ans;
70    }
71};