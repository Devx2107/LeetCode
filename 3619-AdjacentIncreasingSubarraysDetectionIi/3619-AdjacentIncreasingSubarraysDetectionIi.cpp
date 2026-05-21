// Last updated: 21/05/2026, 18:10:10
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        
        int prev = 0, curr = 1;
        int ans = 0;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[i-1]) {
                curr++;
            } else {
                ans = max(ans, curr / 2);                 
                ans = max(ans, min(prev, curr));         
                prev = curr;
                curr = 1;
            }
        }
        ans = max(ans, curr / 2);
        ans = max(ans, min(prev, curr));

        return ans;
    }
};