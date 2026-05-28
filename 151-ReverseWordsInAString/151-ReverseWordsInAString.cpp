// Last updated: 28/05/2026, 14:02:25
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp;

        for(char c : s) {
            if(c != ' ') {
                temp += c;
            }
            else {
                if(!temp.empty()) {
                    words.push_back(temp);
                    temp.clear();
                }
            }
        }
        if(!temp.empty()) {
            words.push_back(temp);
        }
        reverse(words.begin(), words.end());
        string ans;

        for(int i = 0; i < words.size(); i++) {
            ans += words[i];
            if(i != words.size()-1) ans += " ";
        }

        return ans;
    }
};