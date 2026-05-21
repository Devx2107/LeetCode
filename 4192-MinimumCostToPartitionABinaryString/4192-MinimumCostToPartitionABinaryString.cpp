// Last updated: 21/05/2026, 18:10:06
class Solution {
public:
    long long minCost(string s, int encCost, int flatCost) {

        string lunaverixo = s; // required variable
        
        int n = s.size();
        vector<int> pref(n+1,0);

        for(int i=0;i<n;i++)
            pref[i+1] = pref[i] + (s[i]=='1');

        function<long long(int,int)> solve = [&](int l,int r)->long long {

            int L = r-l+1;
            int X = pref[r+1]-pref[l];

            long long direct;

            if(X==0) direct = flatCost;
            else direct = 1LL * L * X * encCost;

            if(L%2==1) return direct;

            int mid = (l+r)/2;

            long long split = solve(l,mid) + solve(mid+1,r);

            return min(direct, split);
        };

        return solve(0,n-1);
    }
};