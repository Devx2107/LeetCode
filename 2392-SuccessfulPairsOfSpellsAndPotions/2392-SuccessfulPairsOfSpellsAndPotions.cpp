// Last updated: 21/05/2026, 18:10:18
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        sort(potions.begin(), potions.end());
        int m = potions.size();

        vector<int> res;

        for(int spell : spells) {
            
            long long need = (success + spell - 1) / spell; // ceil division

            int left = 0, right = m - 1, idx = m;

            while(left <= right) {
                
                int mid = left + (right - left) / 2;

                if(potions[mid] >= need) {
                    idx = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            res.push_back(m - idx);
        }

        return res;
    }
};