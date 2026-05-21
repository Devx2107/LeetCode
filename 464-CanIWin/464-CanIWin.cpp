// Last updated: 21/05/2026, 18:11:07
class Solution {
public:
    unordered_map<int, bool> dp;

    bool canWin(int mask, int total, int desiredTotal, int n) {
        
        if(dp.count(mask)) return dp[mask];

        for(int i = 1; i <= n; i++) {
            if(!(mask & (1 << i))) {  
                if(total + i >= desiredTotal)
                    return dp[mask] = true;
                if(!canWin(mask | (1 << i), total + i, desiredTotal, n))
                    return dp[mask] = true;
            }
        }
        return dp[mask] = false;
    }

    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        int sum = (maxChoosableInteger * (maxChoosableInteger + 1)) / 2;
        if(sum < desiredTotal) return false;
        return canWin(0, 0, desiredTotal, maxChoosableInteger);
    }
};