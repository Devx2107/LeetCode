// Last updated: 21/05/2026, 18:12:20
class Solution {
public:
    int rob(vector<int>& nums) {
        
        int prev2 = 0; 
        int prev1 = 0; 
        for(int num : nums) {
            int curr = max(prev1, prev2 + num);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};