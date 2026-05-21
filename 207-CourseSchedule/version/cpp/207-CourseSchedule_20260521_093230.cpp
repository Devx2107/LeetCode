// Last updated: 5/21/2026, 9:32:30 AM
class Solution {
    public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses,0);

        for(auto &it : prerequisites) {
            indegree[it[1]]++;
            adj[it[0]].push_back(it[1]);
        }

        queue<int> q;
        for(int i=0; i<numCourses; i++) if(!indegree[i]) q.push(i);

        int finish = 0;
        while (!q.empty()) {
            int node = q.front(); q.pop();
            finish++;

            for(int &it : adj[node]) {
                indegree[it]--;
                if(!indegree[it]) q.push(it);
            }
        }

        return finish == numCourses;
    }
};