// Last updated: 21/05/2026, 18:10:25
class Solution {
public:
    int countDifferentSubsequenceGCDs(vector<int>& nums) {
        
        int max_val = *max_element(nums.begin(), nums.end());

        vector<bool> present(max_val + 1, false);

        for(int x : nums)
            present[x] = true;

        int count = 0;

        for(int g = 1; g <= max_val; g++) {
            
            int curr_gcd = 0;

            for(int multiple = g; multiple <= max_val; multiple += g) {
                
                if(present[multiple]) {
                    curr_gcd = gcd(curr_gcd, multiple);

                    if(curr_gcd == g) {
                        count++;
                        break;
                    }
                }
            }
        }

        return count;
    }
};