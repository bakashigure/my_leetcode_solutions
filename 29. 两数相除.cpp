#if 0
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN)
        {
            if (divisor == 1) return INT_MIN;
            if (divisor == -1) return INT_MAX;
        }
        if (divisor == INT_MIN)
            return dividend == INT_MIN ? 1 : 0;
        if (dividend == 0) return 0;
        bool rev = false;
        if (divisor > 0) rev = !rev;
        if (dividend > 0) rev = !rev;
        dividend = dividend > 0 ? -dividend : dividend;
        divisor = divisor > 0 ? -divisor : divisor;

        //cout << dividend << endl << divisor << endl;

        auto quickAdd = [](int x, int y, int z) {
            int res = 0, add = y;
            while (z)
            {
                if (z & 1)
                {
                    if (res < x - add) { return false; }
                    res += add;
                }
                if (z != 1)
                {
                    if (add < x - add) return false;
                    add += add;
                }
                z >>= 1;
            }
            return true;
        };

        int left = 1, right = INT_MAX, ans = 0;
        while (left <= right)
        {
            int mid = left + ((right - left) >> 1);
            if (quickAdd(dividend, divisor, mid))
            {
                ans = mid;
                if (mid == INT_MAX) break;
                left = mid + 1;
            }
            else right = mid - 1;
        }
        return rev ? -ans : ans;

    }
};

int main()
{
    Solution s;
    cout << s.divide(1, 3);
    return 0;
}

#endif