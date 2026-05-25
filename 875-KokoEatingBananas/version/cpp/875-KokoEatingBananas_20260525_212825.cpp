// Last updated: 5/25/2026, 9:28:25 PM
1class Solution {
2public:
3
4    bool canPlace(vector<int>& position,
5                  int m,
6                  int dist) {
7
8        int countBalls = 1;
9
10        int lastPos = position[0];
11
12        for(int i = 1; i < position.size(); i++) {
13
14            if(position[i] - lastPos >= dist) {
15
16                countBalls++;
17
18                lastPos = position[i];
19            }
20        }
21
22        return countBalls >= m;
23    }
24
25    int maxDistance(vector<int>& position, int m) {
26
27        sort(position.begin(), position.end());
28
29        int low = 1;
30
31        int high = position.back() - position.front();
32
33        int ans = 1;
34
35        while(low <= high) {
36
37            int mid = low + (high-low)/2;
38
39            if(canPlace(position, m, mid)) {
40
41                ans = mid;
42                
43                low = mid + 1;
44            }
45
46            else {
47
48                high = mid - 1;
49            }
50        }
51
52        return ans;
53    }
54};