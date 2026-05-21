// Last updated: 21/05/2026, 18:12:48
class Solution {
public:
    unordered_map<Node*, Node*> mp;

    Node* cloneGraph(Node* node) {
        
        if(!node) return NULL;

        if(mp.count(node))
            return mp[node];

        Node* clone = new Node(node->val);
        mp[node] = clone;

        for(auto nei : node->neighbors) {
            clone->neighbors.push_back(cloneGraph(nei));
        }
        return clone;
    }
};