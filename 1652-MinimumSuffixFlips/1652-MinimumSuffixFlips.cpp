// Last updated: 28/05/2026, 14:00:31
class Solution {
public:
    int minFlips(string target) {
        int flips = 0;
        char curr = '0';
        for(char c : target) {
            if(c != curr) {
                flips++;
                curr = c;
            }
        }
        return flips;
    }
};