// Last updated: 21/05/2026, 18:12:50
class Solution {
public:
    vector<vector<string>> res;

    bool isPalindrome(string& s, int l, int r) {
        while(l < r) {
            if(s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }

    void backtrack(string& s, int start, vector<string>& curr) {
        
        if(start == s.size()) {
            res.push_back(curr);
            return;
        }

        for(int i = start; i < s.size(); i++) {

            if(isPalindrome(s, start, i)) {

                curr.push_back(s.substr(start, i - start + 1));

                backtrack(s, i + 1, curr);

                curr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        
        vector<string> curr;
        backtrack(s, 0, curr);
        return res;
    }
};