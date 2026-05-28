// Last updated: 28/05/2026, 14:02:52
class Solution {
public:
    string simplifyPath(string path) {

        vector<string> st;

        string curr = "";

        for(int i = 0; i <= path.size(); i++) {

            if(i == path.size() || path[i] == '/') {

                if(curr == "" || curr == ".") {
                }

                else if(curr == "..") {

                    if(!st.empty())
                        st.pop_back();
                }

                else {
                    st.push_back(curr);
                }

                curr = "";
            }

            else {
                curr += path[i];
            }
        }

        // rebuild path
        string ans = "";

        for(string dir : st) {
            ans += "/" + dir;
        }

        return ans.empty() ? "/" : ans;
    }
};