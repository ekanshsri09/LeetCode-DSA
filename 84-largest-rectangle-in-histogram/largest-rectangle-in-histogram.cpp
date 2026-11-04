class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> pse(n, -1);
        vector<int> nse(n, n);

        stack<int> pst, nst;

        // Previous Smaller Element
        for(int i = 0; i < n; i++) {
            while(!pst.empty() && heights[pst.top()] >= heights[i]) {
                pst.pop();
            }

            if(!pst.empty()) {
                pse[i] = pst.top();
            }

            pst.push(i);
        }

        // Next Smaller Element
        for(int i = n-1; i >= 0; i--) {
            while(!nst.empty() && heights[nst.top()] >= heights[i]) {
                nst.pop();
            }

            if(!nst.empty()) {
                nse[i] = nst.top();
            }

            nst.push(i);
        }

        int maxi = 0;

        for(int i = 0; i < n; i++) {
            int width = nse[i] - pse[i] - 1;
            int area = heights[i] * width;

            maxi = max(maxi, area);
        }

        return maxi;
    }
};