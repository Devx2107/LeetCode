// Last updated: 6/4/2026, 9:03:08 PM
1class Solution {
2public:
3    vector<string> alertNames(vector<string>& keyName,
4                              vector<string>& keyTime) {
5
6        unordered_map<string, vector<int>> mp;
7
8        for (int i = 0; i < keyName.size(); i++) {
9
10            string t = keyTime[i];
11
12            int hour = stoi(t.substr(0, 2));
13
14            int minute = stoi(t.substr(3, 2));
15
16            mp[keyName[i]].push_back(hour * 60 + minute);
17        }
18
19        vector<string> ans;
20
21        for (auto& p : mp) {
22
23            auto& times = p.second;
24
25            sort(times.begin(), times.end());
26
27            for (int i = 0; i + 2 < times.size(); i++) {
28
29                if (times[i + 2] - times[i] <= 60) {
30
31                    ans.push_back(p.first);
32                    break;
33                }
34            }
35        }
36
37        sort(ans.begin(), ans.end());
38
39        return ans;
40    }
41};