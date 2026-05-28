// Last updated: 28/05/2026, 14:02:54
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        vector<string> ans;

        int i = 0;
        int n = words.size();

        while(i < n) {

            int j = i;
            int lineLen = 0;
            while(j < n &&
                  lineLen + words[j].size() + (j-i) <= maxWidth) {
                lineLen += words[j].size();
                j++;
            }

            int gaps = j - i - 1;
            string line = "";

            if(j == n || gaps == 0) {
                for(int k = i; k < j; k++) {
                    line += words[k];
                    if(k != j-1)
                        line += " ";
                }
                while(line.size() < maxWidth)
                    line += " ";
            }

            else {

                int totalSpaces = maxWidth - lineLen;
                int evenSpaces = totalSpaces / gaps;
                int extra = totalSpaces % gaps;

                for(int k = i; k < j; k++) {

                    line += words[k];

                    if(k != j-1) {

                        int spaces = evenSpaces;
                        if(extra > 0) {
                            spaces++;
                            extra--;
                        }
                        line += string(spaces, ' ');
                    }
                }
            }

            ans.push_back(line);
            i = j;
        }

        return ans;
    }
};