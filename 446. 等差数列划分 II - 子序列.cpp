#if 0
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        using ll = long long;
        int n = nums.size();
        int ans = 0;
        vector<unordered_map<ll, int>> f(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                ll d = nums[i] - nums[j];
                auto it = f[j].find(d);
                int cnt = it == f[j].end() ? 0 : it->second;
                ans += cnt;
                f[i][d] += cnt + 1;
            }
        }
        return ans;
    }
};


#endif