// Last updated: 21/05/2026, 18:11:51
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> dq;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            
            // remove out of window
            if(!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            // maintain decreasing order
            while(!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            dq.push_back(i);

            // store result
            if(i >= k - 1)
                res.push_back(nums[dq.front()]);
        }

        return res;
    }
};