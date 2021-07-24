#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n == 1) return false;
        for (int i = 1; i < n; ++i)
            if (nums[i] == nums[i - 1]) return true;
        return false;


    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> nums = { 1,1,1,3,3,4,3,2,4,2 };
    Solution s;
    
}



#endif