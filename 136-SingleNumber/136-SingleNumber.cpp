// Last updated: 21/05/2026, 18:12:45
/*class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        
        for (int n : nums) {
            result ^= n;   
        }
        return result;
    }
};*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        
        return nums.back(); // last element
    }
};

