class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        for (long long place = 1000; place <= n; ) {
            ans += n - place + 1;

            if (place > n / 1000) break;
            place *= 1000;
        }

        return ans;
    }
};