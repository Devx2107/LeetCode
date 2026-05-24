// Last updated: 5/24/2026, 3:10:11 PM
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4
5        int k = s1.size();
6        if(k > s2.size()) return false;
7
8        vector<int> freq1(26,0);
9        vector<int> freq2(26,0);
10
11        for(char ch : s1) freq1[ch-'a']++;
12
13        for(int i = 0; i < s2.size(); i++) {
14            freq2[s2[i]-'a']++;
15            if(i >= k) freq2[s2[i-k]-'a']--;
16            if(freq1 == freq2) return true;
17        }
18        return false;
19    }
20};