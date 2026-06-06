// Last updated: 6/6/2026, 8:48:57 PM
1class Solution {
2public:
3    int maxScore(vector<int>& nums, int maxVal) {
4        int LIM = max(maxVal, *max_element(nums.begin(), nums.end()));
5        vector<int> freq(LIM + 1, 0);
6        for (int x : nums)
7            freq[x]++;
8        vector<int> div(LIM + 1, 0);
9        for (int d = 1; d <= LIM; ++d) {
10            for (int m = d; m <= LIM; m += d) {
11                div[d] += freq[m];
12            }
13        }
14        vector<int> prime(LIM + 1);
15        iota(prime.begin(), prime.end(),0);
16        if (LIM >= 0)
17            prime[0] = 0;
18        if (LIM >= 1)
19            prime[1] = 1;
20
21        for (int i = 2; 1LL * i * i <= LIM; ++i) {
22            if (prime[i] == i) {
23                for (int j = i * i; j <= LIM; j += i) {
24                    if (prime[j] == j)
25                        prime[j] = i;
26                }
27            }
28        }
29        auto badCnt = [&](int x) -> int {
30            if (x == 1)
31                return 0;
32            vector<int> primes;
33            int t = x;
34            while (t > 1) {
35                int p = prime[t];
36                primes.push_back(p);
37                while (t % p == 0)
38                    t /= p;
39            }
40            long long bad = 0;
41            int k = (int)primes.size();
42
43            for (int mask = 1; mask < (1 << k); ++mask) {
44                int prod = 1;
45                int bit = 0;
46                for (int i = 0; i < k; ++i) {
47                    if (mask & (1 << i)) {
48                        prod *= primes[i];
49                        bit++;
50                    }
51                }
52                if (bit & 1)
53                    bad += div[prod];
54                else
55                    bad -= div[prod];
56            }
57            return (int)bad;
58        };
59        long long ans = 0;
60        for (int x = 1; x <= LIM; ++x) {
61            if (freq[x] == 0 && x > maxVal)
62                continue;
63            int bad = badCnt(x);
64            long long score;
65            if (freq[x] > 0) {
66                long long cost = bad - (x > 1 ? 1 : 0);
67                score = 1LL * x - cost;
68            } else {
69                long long cost = max(1, bad);
70                score = 1LL * x - cost;
71            }
72            ans = max(ans, score);
73        }
74        return (int)ans;
75    }
76};