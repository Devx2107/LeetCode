// Last updated: 5/21/2026, 1:56:31 PM
1class Solution {
2public:
3    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
4        
5        vector<vector<int>> adj(numCourses);
6        vector<int> indegree(numCourses, 0);
7        
8        for(auto &p : prerequisites) {
9            adj[p[1]].push_back(p[0]);
10            indegree[p[0]]++;
11        }
12
13        queue<int> q;
14
15       
16        for(int i = 0; i < numCourses; i++) {
17            if(indegree[i] == 0)
18                q.push(i);
19        }
20
21        int count = 0;
22
23        while(!q.empty()) {
24            
25            int node = q.front();
26            q.pop();
27            count++;
28
29            for(auto nei : adj[node]) {
30                indegree[nei]--;
31                if(indegree[nei] == 0)
32                    q.push(nei);
33            }
34        }
35
36        return count == numCourses;
37    }
38};