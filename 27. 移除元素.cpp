#if 0
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0;
        int n = nums.size();
        int r=n-1;
        for(;l<=r;l++)
        {
            if(nums[l]==val)
            {
                swap(nums[l],nums[r]);
                l--;
                r--;
            }
        }
        return r+1;

    }
};


int main()
{
    vector<int> nums={1};
    int val = 1;
    Solution s;
    int res = s.removeElement(nums,val);
    printf("%d",res);
    return 0;

}


#endif // 1
