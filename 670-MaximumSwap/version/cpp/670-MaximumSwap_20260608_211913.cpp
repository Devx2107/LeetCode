// Last updated: 6/8/2026, 9:19:13 PM
1class Solution {
2public:
3    int maximumSwap(int num) {
4        string s = to_string(num);
5        for(int i=0;i<s.size();i++){
6            int ind = i;
7            for(int j=s.size()-1;j>i;j--){
8                if(s[ind]<s[j]){
9                    ind = j;
10                }
11            }
12            if(ind != i and s[i]<s[ind]){
13                swap(s[i],s[ind]);
14                return stoi(s);
15            }
16        }
17        return num;
18    }
19};