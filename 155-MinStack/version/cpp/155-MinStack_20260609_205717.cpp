// Last updated: 6/9/2026, 8:57:17 PM
1class MinStack {
2public:
3    stack<int> st;
4    stack<int> mn;
5    MinStack() {}
6    void push(int val) {
7        st.push(val);
8        if (mn.empty())
9            mn.push(val);
10        else
11            mn.push(min(val, mn.top()));
12    }
13    void pop() {
14        st.pop();
15        mn.pop();
16    }
17    int top() { return st.top(); }
18    int getMin() { return mn.top(); }
19};
20
21/**
22 * Your MinStack object will be instantiated and called as such:
23 * MinStack* obj = new MinStack();
24 * obj->push(value);
25 * obj->pop();
26 * int param_3 = obj->top();
27 * int param_4 = obj->getMin();
28 */