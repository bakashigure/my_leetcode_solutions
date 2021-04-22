#if 0
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int len = 0;
        int n =nums.size();
        for(int i = 0 ; i < nums.size(); i++)
            if(len < 2 || nums[len-2] != nums[i])
            {
                nums[len] = nums[i];
                len++;
            }
        return len;
    }
};

int main()
{
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    Solution s;
    int n = s.removeDuplicates(nums);
    for(int i = 0 ; i<n; i++)
        printf("%d ",nums[i]);
    return 0;

}

#endif // 1
