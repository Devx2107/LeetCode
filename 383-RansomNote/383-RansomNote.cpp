// Last updated: 21/05/2026, 18:11:22
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ch(26, 0);
        for(int i=0; i<magazine.size(); i++)
        {
            ch[magazine[i] - 'a']++;
        }
        for(int i=0; i<ransomNote.size(); i++)
        {
            ch[ransomNote[i]- 'a']--;
            if(ch[ransomNote[i]- 'a'] < 0)
            {
                return false;
            }
        }
        return true; 
    }
};

