// Last updated: 21/05/2026, 18:10:57
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for(char t : tasks) {
            freq[t - 'A']++;
        }
        int maxFreq = *max_element(freq.begin(), freq.end());
        int countMax = 0;
        for(int f : freq) {
            if(f == maxFreq) countMax++;
        }
        int ans = (maxFreq - 1) * (n + 1) + countMax;
        return max((int)tasks.size(), ans);
    }
};