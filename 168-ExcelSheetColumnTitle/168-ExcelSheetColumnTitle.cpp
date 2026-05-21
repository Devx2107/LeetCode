// Last updated: 21/05/2026, 18:12:28
class Solution {
public:
    string convertToTitle(int n) {
        
        string result = "";

        while(n > 0) {
            n--; // IMPORTANT
            
            char c = 'A' + (n % 26);
            result += c;

            n /= 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};