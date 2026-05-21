// Last updated: 21/05/2026, 18:13:57
class Solution {
public:
    vector<vector<int>> res;

    void backtrack(vector<int>& candidates, int target, vector<int>& curr, int i) {
        
        if(target == 0) {
            res.push_back(curr);
            return;
        }

        if(i >= candidates.size() || target < 0)
            return;

        // take
        curr.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], curr, i);

        curr.pop_back();

        // skip
        backtrack(candidates, target, curr, i + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> curr;
        backtrack(candidates, target, curr, 0);
        return res;
    }
};