// Last updated: 21/05/2026, 18:12:52
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for(int num : st) {
            
            // start of sequence
            if(!st.count(num - 1)) {
                
                int curr = num;
                int count = 1;

                while(st.count(curr + 1)) {
                    curr++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};