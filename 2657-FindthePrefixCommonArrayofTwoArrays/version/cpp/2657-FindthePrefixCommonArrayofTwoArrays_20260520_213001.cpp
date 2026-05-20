// Last updated: 5/20/2026, 9:30:01 PM
/*
 * Q. Why do we increase common ONLY when frequency becomes exactly 2?
 * A. Because frequency represents total appearances across BOTH arrays. frequency 2 means this value has arrived from BOTH arrays.
*/

1class Solution {
2public:
3    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
4
5        int n = A.size();
6        vector<int> freq(n + 1, 0);
7        vector<int> ans;
8        int common = 0;
9
10        for(int i = 0; i < n; i++) {
11
12            freq[A[i]]++;
13            if(freq[A[i]] == 2)
14                common++;
15
16            freq[B[i]]++;
17            if(freq[B[i]] == 2)
18                common++;
19
20            ans.push_back(common);
21        }
22        return ans;
23    }
24};