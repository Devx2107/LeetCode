// Last updated: 21/05/2026, 18:10:52
class Solution {
public:
    unordered_map<string, vector<string>> graph;
    unordered_set<string> visited;

    void dfs(string email, vector<string>& comp) {
        
        visited.insert(email);
        comp.push_back(email);

        for(auto& nei : graph[email]) {
            if(!visited.count(nei)) {
                dfs(nei, comp);
            }
        }
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        
        unordered_map<string, string> emailToName;

    
        for(auto& acc : accounts) {
            string name = acc[0];

            for(int i = 1; i < acc.size(); i++) {
                
                emailToName[acc[i]] = name;

                if(i > 1) {
                    graph[acc[i]].push_back(acc[i-1]);
                    graph[acc[i-1]].push_back(acc[i]);
                }
            }
        }

        vector<vector<string>> res;

        
        for(auto& [email, name] :emailToName) {
            
            if(!visited.count(email)) {
                
                vector<string> comp;
                dfs(email, comp);

                sort(comp.begin(), comp.end());

                comp.insert(comp.begin(), emailToName[email]);

                res.push_back(comp);
            }
        }

        return res;
    }
};