// Last updated: 21/05/2026, 18:13:42
#include <algorithm>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int current = nums[0];
        int max_sum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            current = max(nums[i], current + nums[i]);
            max_sum = max(max_sum, current);
        }

        return max_sum;
    }
};