// Last updated: 21/05/2026, 18:11:28
class Solution {
public:
    int rob(TreeNode* root) {
        auto res = dfs(root);
        return max(res.first, res.second);
    }

    pair<int,int> dfs(TreeNode* node) {
        
        if(!node) return {0,0};

        auto left = dfs(node->left);
        auto right = dfs(node->right);

        int rob = node->val + left.second + right.second;

        int notRob = max(left.first, left.second) +
                     max(right.first, right.second);

        return {rob, notRob};
    }
};