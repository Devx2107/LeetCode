// Last updated: 28/05/2026, 14:01:04
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0] = -1;

        int prefix = 0;
        int maxi = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 0)
                prefix += -1;
            else
                prefix += 1;

            if(mp.count(prefix)) {
                maxi = max(maxi,
                           i - mp[prefix]);
            }
            else {
                mp[prefix] = i;
            }
        }
        return maxi;
    }
};