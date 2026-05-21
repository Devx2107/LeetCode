// Last updated: 21/05/2026, 18:11:25
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size()-1;

        while(l < r){
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};