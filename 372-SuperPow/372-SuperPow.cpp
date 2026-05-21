// Last updated: 21/05/2026, 19:25:04
class Solution
{
    public:

        const int MOD = 1337;

    int power(int a, int b)
    {

        int res = 1;

        a %= MOD;

        while (b > 0)
        {

            if (b & 1)
                res = (res *a) % MOD;

            a = (a *a) % MOD;

            b >>= 1;
        }

        return res;
    }

    int superPow(int a, vector<int> &b)
    {

        int result = 1;

        for (int digit: b)
        {

            result =
                power(result, 10) *
                power(a, digit) % MOD;
        }

        return result;
    }
};