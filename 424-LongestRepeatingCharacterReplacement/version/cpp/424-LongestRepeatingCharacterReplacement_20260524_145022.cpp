// Last updated: 5/24/2026, 2:50:22 PM
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4
5        vector<int> ans;
6
7        if(p.size() > s.size())
8            return ans;
9
10        vector<int> pFreq(26, 0);
11        vector<int> winFreq(26, 0);
12
13        for(char ch : p)
14            pFreq[ch - 'a']++;
15        int k = p.size();
16
17        for(int i = 0; i < s.size(); i++) {
18
19            winFreq[s[i] - 'a']++;
20
21            if(i >= k) {
22                winFreq[s[i-k] - 'a']--;
23            }
24
25            if(winFreq == pFreq) {
26                ans.push_back(i-k+1);
27            }
28        }
29
30        return ans;
31    }
32};