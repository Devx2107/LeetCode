// Last updated: 21/05/2026, 18:13:41
class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int farthest = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i > farthest)
                return false;

            farthest = max(farthest, i + nums[i]);
        }
        return true;
    }
};