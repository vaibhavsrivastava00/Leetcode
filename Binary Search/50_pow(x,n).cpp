class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            x = 1 / x;
            if (n == INT_MIN) { // Handle edge case for INT_MIN
                return x * myPow(x, INT_MAX);
            }
            n = -n;
        }
        double a = myPow(x, n / 2);
        if (n % 2 == 0) {
            return a * a;
        } else {
            return x * a * a;
        }
    }
};
