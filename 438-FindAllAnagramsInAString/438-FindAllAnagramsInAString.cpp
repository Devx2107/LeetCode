// Last updated: 28/05/2026, 14:01:42
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if(p.size() > s.size())
            return ans;

        vector<int> pFreq(26, 0);
        vector<int> winFreq(26, 0);

        for(char ch : p)
            pFreq[ch - 'a']++;
        int k = p.size();

        for(int i = 0; i < s.size(); i++) {

            winFreq[s[i] - 'a']++;

            if(i >= k) {
                winFreq[s[i-k] - 'a']--;
            }

            if(winFreq == pFreq) {
                ans.push_back(i-k+1);
            }
        }

        return ans;
    }
};