#if 0
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int>& nums)
    {
        int n = nums.size();
        if (n==1) return nums[0];
        else if (n==2) return nums[0]<nums[1] ? nums[0] : nums[1];
        int l = 0, r = n-1;

        while(l<r && nums[0]==nums[r]) r--;

        while(l<r)
        {
            int mid = (l+r+1)/2;
            if (nums[0]<=nums[mid])
                l=mid;
            else
            {
                r=mid-1;
            }

        }
        //printf("l: %d  r:%d \n",l,r);
        if (r+1 < n)
            return nums[0]<nums[r+1]? nums[0]:nums[r+1];
        else
            return nums[0];
    }
};

int main()
{
    vector<int> nums = {2,2,2,0,1};
    Solution s;
    int res = s.findMin(nums);
    printf("%d",res);
    return 0;
}

#endif // 1
