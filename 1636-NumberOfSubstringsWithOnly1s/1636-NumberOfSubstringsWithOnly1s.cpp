// Last updated: 21/05/2026, 18:10:28
class Solution {
public:
    int numSub(string s) {
        
        long long curr = 0, res = 0;
        int mod = 1e9 + 7;

        for(char c : s) {
            
            if(c == '1') {
                curr++;
                res += curr;
            } else {
                curr = 0;
            }
        }

        return res % mod;
    }
};