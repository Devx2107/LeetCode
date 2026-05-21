// Last updated: 21/05/2026, 18:13:19
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        stack<int> st;
        int maxArea = 0;

        for(int i = 0; i <= heights.size(); i++) {
            
            int h = (i == heights.size() ? 0 : heights[i]);

            while(!st.empty() && h < heights[st.top()]) {
                
                int height = heights[st.top()];
                st.pop();

                int width;

                if(st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                maxArea = max(maxArea, height * width);
            }

            st.push(i);
        }

        return maxArea;
    }
};