// Last updated: 5/27/2026, 2:34:55 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        vector<string> words;
5        string temp;
6
7        for(char c : s) {
8            if(c != ' ') {
9                temp += c;
10            }
11            else {
12                if(!temp.empty()) {
13                    words.push_back(temp);
14                    temp.clear();
15                }
16            }
17        }
18        if(!temp.empty()) {
19            words.push_back(temp);
20        }
21        reverse(words.begin(), words.end());
22        string ans;
23
24        for(int i = 0; i < words.size(); i++) {
25            ans += words[i];
26            if(i != words.size()-1) ans += " ";
27        }
28
29        return ans;
30    }
31};