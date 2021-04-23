#if 1
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> f(n, 0);
        vector<int> g(n, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            int len = 1, pre = i;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] % nums[j] == 0)
                {
                    if (f[j]+1>len)
                    {
                        len = f[j] + 1;
                        pre = j;
                    }
                }
            }
            f[i] = len;
            g[i] = pre;

        }

        int id = max_element(f.begin(), f.end()) - f.begin();
        int max_val = f[id];

        while (ans.size() < max_val)
        {
            ans.push_back(nums[id]);
            id = g[id];
        }
        return ans;


    }
};

signed main()
{
    vector<int> nums = { 1,2,3 };
    Solution s;
    vector<int> res = s.largestDivisibleSubset(nums);
    for (auto v : res)
        cout << v << " ";
    return 0;
}

#endif 	