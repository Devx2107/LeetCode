// Last updated: 5/31/2026, 6:18:49 PM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5        for(string s : tokens) {
6
7            if(s == "+" || s == "-" || s == "*" || s == "/") {
8                int a = st.top();
9                st.pop();
10                int b = st.top();
11                st.pop();
12                if(s == "+") st.push(b + a);
13                else if(s == "-") st.push(b - a);
14                else if(s == "*") st.push(b * a);
15                else st.push(b / a);
16            }
17            else {
18                st.push(stoi(s));
19            }
20        }
21        return st.top();
22    }
23};