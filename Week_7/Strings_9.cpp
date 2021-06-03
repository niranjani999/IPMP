class Solution {
public:
    int myAtoi(string s) {
        bool start = 0;
        int sign = 1;
        long res = 0;
        for (char c: s) {
            if ('0' <= c && c <= '9') {
                start = 1;
                res = res * 10 + (c - '0');
                if (res > INT_MAX) {
                    break;
                }
            } else if (!start && c == ' ') {
                continue;
            } else if (!start && c == '+') {
                start = 1;
            } else if (!start && c == '-') {
                sign = -1;
                start = 1;
            } else {
                break;
            }
        }
        res *= sign;
        if (res < INT_MIN) {
            res = INT_MIN;
        } else if (res > INT_MAX) {
            res = INT_MAX;
        }
        return int(res);
    }
};
