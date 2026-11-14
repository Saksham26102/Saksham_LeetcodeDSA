
class Solution {
public:
    double myPow(double x, int n) {

        long long bin = n;
        bool negative = (bin < 0);

        if (bin < 0) {
            bin = -bin;
        }

        double ans = 1.0;

        while (bin > 0) {

            if (bin % 2 == 1) {
                ans *= x;
            }

            x *= x;
            bin /= 2;
        }

        if (negative) {
            ans = 1.0 / ans;
        }

        return ans;
    }
};
