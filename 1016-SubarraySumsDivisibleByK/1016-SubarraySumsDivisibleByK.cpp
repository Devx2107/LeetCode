// Last updated: 21/05/2026, 18:10:39
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        mp[0] = 1;

        int sum = 0, count = 0;

        for(int num : nums) {
            
            sum += num;

            int rem = (sum % k + k) % k;

            if(mp.count(rem))
                count += mp[rem];

            mp[rem]++;
        }

        return count;
    }
};