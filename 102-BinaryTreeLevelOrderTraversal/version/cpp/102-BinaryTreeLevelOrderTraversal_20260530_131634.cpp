// Last updated: 5/30/2026, 1:16:34 PM
1class Solution {
2public:
3    vector<vector<int>> levelOrder(TreeNode* root) {
4        vector<vector<int>> ans;
5        if(root == NULL) return ans;
6        queue<TreeNode*> q;
7        q.push(root);
8
9        while(!q.empty()) {
10            int size = q.size();
11            vector<int> level;
12            for(int i = 0; i < size; i++) {
13                TreeNode* curr = q.front();
14                q.pop();
15                level.push_back(curr->val);
16                if(curr->left)
17                    q.push(curr->left);
18                if(curr->right)
19                    q.push(curr->right);
20            }
21            ans.push_back(level);
22        }
23        return ans;
24    }
25};