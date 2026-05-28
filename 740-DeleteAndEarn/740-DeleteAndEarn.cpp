// Last updated: 28/05/2026, 14:00:55
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int maxNum = *max_element(nums.begin(), nums.end());

        vector<int> points(maxNum + 1, 0);

        for(int x : nums) {
            points[x] += x;
        }

        int prev2 = 0;
        int prev1 = points[0];

        for(int i = 1; i <= maxNum; i++) {

            int take = points[i] + prev2;
            int skip = prev1;

            int curr = max(take, skip);

            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};