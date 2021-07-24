#if 0
#include <iostream>
#include <vector>
#include <algorithm>
// 排个序, 从大到小求和, 大于总和一半直接输出
using namespace std;
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        int n = nums.size()-1;
        int cur = 0;
        int sum = 0;
        for (int i:nums)
            sum += i;
        while(cur <= (sum/2))
        {
            res.push_back(nums[n]);
            cur += nums[n];
            --n;
        }
        return res;
    }
};
int main()
{
    vector<int> nums = {4,4,7,6,7};
    Solution s;
    vector<int> res = s.minSubsequence(nums);
    for (auto i : res)
        cout << i << " ";
    return 0;
}


#endif