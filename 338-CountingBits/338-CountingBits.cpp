// Last updated: 21/05/2026, 18:11:27
class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> res(n + 1, 0);

        for(int i = 1; i <= n; i++) {
            res[i] = res[i >> 1] + (i & 1);
        }

        return res;
    }
};