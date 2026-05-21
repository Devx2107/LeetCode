// Last updated: 21/05/2026, 18:12:21
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while(n){
            count += (n & 1);
            n = n >> 1;
        }

        return count;
    }
};