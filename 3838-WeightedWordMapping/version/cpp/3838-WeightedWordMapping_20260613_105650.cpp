// Last updated: 6/13/2026, 10:56:50 AM
1class Solution {
2public:
3    string mapWordWeights(vector<string>& words, vector<int>& weights) {
4
5        string ans;
6
7        for (string& word : words) {
8
9            long long sum = 0;
10
11            for (char ch : word) {
12                sum += weights[ch - 'a'];
13            }
14
15            int rem = sum % 26;
16
17            ans.push_back('z' - rem);
18        }
19
20        return ans;
21    }
22};