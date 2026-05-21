// Last updated: 21/05/2026, 18:11:23
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;

        for(int num : nums)
            freq[num]++;

        // min heap {freq, num}
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

        for(auto& [num, f] : freq) {
            
            pq.push({f, num});

            if(pq.size() > k)
                pq.pop();
        }

        vector<int> res;

        while(!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};