// Last updated: 21/05/2026, 18:10:02
class Solution {
public:
    long long countCommas(long long n) {
    long long totalCommas = 0;
    long long threshold = 1000;
    while (n >= threshold) {
        totalCommas += (n - threshold + 1);
        
        if (threshold > 1e15) break; 
        threshold *= 1000;
    }

    return totalCommas;
}
};