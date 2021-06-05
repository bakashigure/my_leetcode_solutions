#if 0
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
/*
* 前缀和, 得  sums[j] - sums[i] = n*k 
* 转换为      sums[j]/k -sums[i]/k = n
* 即两个值对k的取余相同, n就为整数
*/
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> set;
        vector<int> sums(n + 1);
        for (int i = 1; i <= n; i++)
        {
            sums[i] = sums[i - 1] + nums[i - 1];
        }
        for (int i = 2; i <= n; i++)
        {
            set.insert(sums[i - 2] % k);
            if (set.find(sums[i] % k) != set.end()) return true;
        }
        return false;

    }
};

int main()
{
    vector<int> nums = { 23,2,4,6,7 };
    int k = 7;
    Solution s;
    auto res = s.checkSubarraySum(nums, k);
    cout << res;

	return 0;
}
#endif