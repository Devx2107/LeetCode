// Last updated: 21/05/2026, 18:12:23
class Solution {
public:
    void rotate(vector<int>& v, int k) {
        int n = v.size () ;
        k = k %n;
        reverse ( v.begin() , v.end ());
        reverse ( v.begin() , v.begin ()+ k);
        reverse ( v.begin()+k , v.end());
        }
    
};