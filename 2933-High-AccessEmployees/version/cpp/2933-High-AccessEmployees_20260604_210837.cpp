// Last updated: 6/4/2026, 9:08:37 PM
1class Solution {
2public:
3    vector<string> findHighAccessEmployees(
4        vector<vector<string>>& access_times) {
5
6        unordered_map<string, vector<int>> mp;
7
8        for(auto &x : access_times) {
9
10            string name = x[0];
11            string time = x[1];
12
13            int mins =
14                stoi(time.substr(0,2))*60 +
15                stoi(time.substr(2,2));
16
17            mp[name].push_back(mins);
18        }
19
20        vector<string> ans;
21
22        for(auto &[name, times] : mp) {
23
24            sort(times.begin(), times.end());
25
26            for(int i = 0; i + 2 < times.size(); i++) {
27
28                if(times[i+2] - times[i] < 60) {
29
30                    ans.push_back(name);
31                    break;
32                }
33            }
34        }
35
36        return ans;
37    }
38};