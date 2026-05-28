// Last updated: 28/05/2026, 14:00:29
class Solution {
public:

    bool canPlace(vector<int>& position,
                  int m,
                  int dist) {

        int countBalls = 1;

        int lastPos = position[0];

        for(int i = 1; i < position.size(); i++) {

            if(position[i] - lastPos >= dist) {

                countBalls++;

                lastPos = position[i];
            }
        }

        return countBalls >= m;
    }

    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(), position.end());

        int low = 1;

        int high = position.back() - position.front();

        int ans = 1;

        while(low <= high) {

            int mid = low + (high-low)/2;

            if(canPlace(position, m, mid)) {

                ans = mid;
                
                low = mid + 1;
            }

            else {

                high = mid - 1;
            }
        }

        return ans;
    }
};