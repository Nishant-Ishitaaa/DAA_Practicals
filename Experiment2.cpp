--Implemented a power function that computes xyx^yxy in O(log n) time complexity.
class Solution {
public:
double power(double x, long long y) {
        if (y == 0) return 1.0;

        double temp = power(x, y / 2);

        if (y % 2 == 0) {
            return temp * temp;
        } else {
            return x * temp * temp;
        }
    }
    double myPow(double x, int n) {
        long long N = n; // handle large negative safely
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return power(x, N);
    }

};
