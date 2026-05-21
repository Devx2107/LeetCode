// Last updated: 21/05/2026, 18:10:12
/*class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> freq;
        
        for (int n : nums) {
            freq[n]++;
        }
        
        int ans = 0;
        
        for (auto &p : freq) {
            if (p.second == 2) {
                ans ^= p.first;
            }
        }
        return ans;
    }
};*/

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int ans = 0;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                ans ^= nums[i];
                i++;  // skip the pair
            }
        }
        
        return ans;
    }
};