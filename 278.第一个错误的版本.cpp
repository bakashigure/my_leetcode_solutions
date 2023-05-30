/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

bool isBadVersion(int version)
{
    return true;
}

// @lc code=start
// The API isBadVersion is defined for you.

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int l = 1, r = n;
        int mid = 0;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            bool is_bad = isBadVersion(mid);
            if (!is_bad)
            {
                l = mid + 1;
            }
            else
            {
                if (mid == 1)
                    return mid;
                else if (!isBadVersion(mid - 1))
                    return mid;
                else
                    r = mid - 1;
            }
        }
        return mid;
    }
};
// @lc code=end
