// Last updated: 21/05/2026, 18:11:14
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        
        int maxXor = 0, mask = 0;

        for(int i = 31; i >= 0; i--) {
            
            mask |= (1 << i);

            unordered_set<int> s;

            for(int num : nums)
                s.insert(num & mask);

            int temp = maxXor | (1 << i);

            for(int prefix : s) {
                if(s.count(prefix ^ temp)) {
                    maxXor = temp;
                    break;
                }
            }
        }

        return maxXor;
    }
};