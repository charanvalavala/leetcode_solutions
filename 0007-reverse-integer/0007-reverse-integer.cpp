class Solution {
public:
    int reverse(int x) {
        long long a;
        long long b = 0;
        if (x < 0) {
            a = -1 * (long long)x;
        } else {
            a = (long long)x;
        }
        while (a > 0) {
            int rem = a % 10;
            a = a / 10;
            b = b * 10 + rem;
        }

        if (x < 0) {
            b = -1 * b;
        }
        if (b > INT_MAX || b < INT_MIN)
            return 0;
        return int(b);

        return 0;
    }
};