// Last updated: 21/05/2026, 18:10:33
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        vector<string> res;
        res.push_back(words[0]);

        for(int i = 1; i < words.size(); i++) {
            
            string prev = res.back();
            string curr = words[i];
            sort(prev.begin(), prev.end());
            sort(curr.begin(), curr.end());

            if(prev != curr) {
                res.push_back(words[i]);
            }
        }

        return res;
    }
};