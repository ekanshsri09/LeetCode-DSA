class Solution {
public:
    int totalMoney(int n) {
        int mon = 1;
        int week = 0;
        int total = 0;

        for (int i = 0; i < n; i++) {
            total += mon;

            if ((i + 1) % 7 == 0) {
                week++;
                mon = week + 1;
            } else {
                mon++;
            }
        }

        return total;
    }
};