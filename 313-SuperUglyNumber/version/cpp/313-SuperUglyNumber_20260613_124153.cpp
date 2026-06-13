// Last updated: 6/13/2026, 12:41:53 PM
1class Solution {
2public:
3    int nthSuperUglyNumber(int n, vector<int>& primes) {
4
5        int k = primes.size();
6
7        vector<long long> ugly(n);
8        ugly[0] = 1;
9
10        vector<int> idx(k, 0);
11
12        for(int i = 1; i < n; i++) {
13
14            long long nextUgly = LLONG_MAX;
15
16            for(int j = 0; j < k; j++) {
17                nextUgly = min(
18                    nextUgly,
19                    ugly[idx[j]] * 1LL * primes[j]
20                );
21            }
22
23            ugly[i] = nextUgly;
24
25            for(int j = 0; j < k; j++) {
26
27                if(ugly[idx[j]] * 1LL * primes[j]
28                   == nextUgly)
29                    idx[j]++;
30            }
31        }
32
33        return ugly[n - 1];
34    }
35};