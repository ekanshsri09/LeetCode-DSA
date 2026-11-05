class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;

        for (int x : arr1) {
            bool qualifies = true;

            for (int y : arr2) {
                if (abs(x - y) <= d) {
                    qualifies = false;
                    break;
                }
            }

            if (qualifies) ++count;
        }

        return count;
    }
};