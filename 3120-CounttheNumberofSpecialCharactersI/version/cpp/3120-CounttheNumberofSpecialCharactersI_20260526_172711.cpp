// Last updated: 5/26/2026, 5:27:11 PM
1class Solution {
2public:
3    int numberOfSpecialChars(string word) {
4
5        unordered_set<char> lower;
6        unordered_set<char> upper;
7
8        for(char c : word) {
9
10            if(islower(c))
11                lower.insert(c);
12
13            else
14                upper.insert(c);
15        }
16
17        int count = 0;
18
19        for(char c = 'a'; c <= 'z'; c++) {
20
21            if(lower.count(c) &&
22               upper.count(toupper(c))) {
23
24                count++;
25            }
26        }
27
28        return count;
29    }
30};