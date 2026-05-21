// Last updated: 21/05/2026, 18:14:29
class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        
        if(A.size() > B.size()) return findMedianSortedArrays(B, A);

        int n = A.size(), m = B.size();
        int left = 0, right = n;

        while(left <= right) {
            
            int i = (left + right) / 2;
            int j = (n + m + 1) / 2 - i;

            int l1 = (i == 0) ? INT_MIN : A[i-1];
            int r1 = (i == n) ? INT_MAX : A[i];

            int l2 = (j == 0) ? INT_MIN : B[j-1];
            int r2 = (j == m) ? INT_MAX : B[j];

            if(l1 <= r2 && l2 <= r1) {
                
                if((n + m) % 2 == 0)
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                else
                    return max(l1, l2);
            }
            else if(l1 > r2) {
                right = i - 1;
            }
            else {
                left = i + 1;
            }
        }

        return 0.0;
    }
};