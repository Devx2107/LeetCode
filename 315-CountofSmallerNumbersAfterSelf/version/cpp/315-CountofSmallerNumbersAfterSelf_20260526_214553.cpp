// Last updated: 5/26/2026, 9:45:53 PM
1class Solution {
2public:
3
4    vector<int> ans;
5
6    void mergeSort(vector<pair<int,int>>& v, int l, int r) {
7
8        if(l >= r)
9            return;
10
11        int mid = (l + r) / 2;
12
13        mergeSort(v, l, mid);
14        mergeSort(v, mid + 1, r);
15
16        vector<pair<int,int>> temp;
17
18        int i = l;
19        int j = mid + 1;
20
21        int rightCount = 0;
22
23        while(i <= mid && j <= r) {
24
25            if(v[j].first < v[i].first) {
26
27                rightCount++;
28                temp.push_back(v[j]);
29                j++;
30            }
31            else {
32
33                ans[v[i].second] += rightCount;
34                temp.push_back(v[i]);
35                i++;
36            }
37        }
38
39        while(i <= mid) {
40
41            ans[v[i].second] += rightCount;
42            temp.push_back(v[i]);
43            i++;
44        }
45
46        while(j <= r) {
47            temp.push_back(v[j]);
48            j++;
49        }
50
51        for(int k = l; k <= r; k++) {
52            v[k] = temp[k - l];
53        }
54    }
55
56    vector<int> countSmaller(vector<int>& nums) {
57
58        int n = nums.size();
59
60        ans.resize(n, 0);
61
62        vector<pair<int,int>> v;
63
64        for(int i = 0; i < n; i++) {
65            v.push_back({nums[i], i});
66        }
67
68        mergeSort(v, 0, n-1);
69
70        return ans;
71    }
72};