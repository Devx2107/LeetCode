// Last updated: 28/05/2026, 14:01:01
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int k = s1.size();
        if(k > s2.size()) return false;

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        for(char ch : s1) freq1[ch-'a']++;

        for(int i = 0; i < s2.size(); i++) {
            freq2[s2[i]-'a']++;
            if(i >= k) freq2[s2[i-k]-'a']--;
            if(freq1 == freq2) return true;
        }
        return false;
    }
};