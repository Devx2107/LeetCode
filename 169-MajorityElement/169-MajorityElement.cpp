// Last updated: 21/05/2026, 18:12:24
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int candidate = 0, count = 0;

        for(int num : nums) {
            if(count == 0)
                candidate = num;

            if(num == candidate)
                count++;
            else
                count--;
        }

        return candidate;
    }
};