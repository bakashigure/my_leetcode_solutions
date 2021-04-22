#if 0
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int>& nums)
    {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<r)
        {
            int mid= (l+r+1)/2;
            if (nums[0]<= nums[mid])
            {
                l=mid;
            }
            else
            {
                r=mid-1;
            }
        }

        return r+1< n ? nums[r+1] : nums[0];

    }
};

int main()
{
    vector<int> nums = {3,4,5,1,2};
    Solution s;
    int res=s.findMin(nums);
    printf("%d",res);
    return 0;
}
#endif // 1
