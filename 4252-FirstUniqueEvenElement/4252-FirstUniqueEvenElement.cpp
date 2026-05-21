// Last updated: 21/05/2026, 18:09:56
class Solution {
public:
    int firstUniqueEven(const vector<int>& nums) {
    unordered_map<int, int> counts;

    for (int num : nums) {
        counts[num]++;
    }
    for (int num : nums) {
        if (num % 2 == 0 && counts[num] == 1) {
            return num;
        }
    }
    return -1;
}
};