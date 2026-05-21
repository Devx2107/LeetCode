// Last updated: 21/05/2026, 18:12:07
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses, 0);

        for(auto& p : prerequisites) {
            int a = p[0], b = p[1];
            graph[b].push_back(a);
            indegree[a]++;
        }

        queue<int> q;

        for(int i = 0; i < numCourses; i++) {
            if(indegree[i] == 0)
                q.push(i);
        }

        vector<int> res;

        while(!q.empty()) {
            
            int curr = q.front();
            q.pop();

            res.push_back(curr);

            for(int nei : graph[curr]) {
                indegree[nei]--;

                if(indegree[nei] == 0)
                    q.push(nei);
            }
        }

        if(res.size() == numCourses)
            return res;

        return {};
    }
};