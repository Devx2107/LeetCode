// Last updated: 21/05/2026, 18:12:04
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int num : nums) {
            if(seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};