// Last updated: 6/9/2026, 9:44:09 PM
1class Solution {
2public:
3    bool wordPattern(string pattern, string s) {
4
5        vector<string> words;
6        stringstream ss(s);
7        string word;
8
9        while(ss >> word)
10            words.push_back(word);
11
12        if(pattern.size() != words.size())
13            return false;
14
15        unordered_map<char,string> mp1;
16        unordered_map<string,char> mp2;
17
18        for(int i = 0; i < pattern.size(); i++) {
19
20            char ch = pattern[i];
21            string w = words[i];
22
23            if(mp1.count(ch) && mp1[ch] != w)
24                return false;
25
26            if(mp2.count(w) && mp2[w] != ch)
27                return false;
28
29            mp1[ch] = w;
30            mp2[w] = ch;
31        }
32
33        return true;
34    }
35};