class Solution {
public:
    int reverse(int x) {
        long long sodaonguoc = 0;
        while (x != 0) {
            int chuso = x % 10;
            sodaonguoc = sodaonguoc * 10 + chuso;
            x = x / 10;
        }
        if (sodaonguoc < INT_MIN || sodaonguoc > INT_MAX) {
            return 0;
        }
        return sodaonguoc;
    }
};













