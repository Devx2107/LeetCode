// Last updated: 5/26/2026, 1:44:33 PM
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4
5        int count1 = 0, count2 = 0;
6        int cand1 = 0, cand2 = 1;
7
8        for(int x : nums) {
9            if(x == cand1)
10                count1++;
11            else if(x == cand2)
12                count2++;
13            else if(count1 == 0) {
14                cand1 = x;
15                count1 = 1;
16            }
17            else if(count2 == 0) {
18                cand2 = x;
19                count2 = 1;
20            }
21            else {
22                count1--;
23                count2--;
24            }
25        }
26
27        count1 = count2 = 0;
28
29        for(int x : nums) {
30            if(x == cand1)
31                count1++;
32            else if(x == cand2)
33                count2++;
34        }
35
36        vector<int> ans;
37
38        int n = nums.size();
39
40        if(count1 > n/3)
41            ans.push_back(cand1);
42
43        if(count2 > n/3)
44            ans.push_back(cand2);
45
46        return ans;
47    }
48};