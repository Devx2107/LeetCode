// Last updated: 21/05/2026, 18:10:27
class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int countBalls(int lowLimit, int highLimit) {
        
        vector<int> box(50, 0); 

        int ans = 0;

        for(int i = lowLimit; i <= highLimit; i++) {
            int s = digitSum(i);
            box[s]++;
            ans = max(ans, box[s]);
        }

        return ans;
    }
};