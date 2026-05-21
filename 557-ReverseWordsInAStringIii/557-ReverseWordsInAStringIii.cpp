// Last updated: 21/05/2026, 18:11:02
class Solution {
public:
    string reverseWords(string s) {
        
        int i = 0, n = s.size();
        while(i < n) {
            int j = i;
            while(j < n && s[j] != ' ')
                j++;

            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
        }

        return s;
    }
};