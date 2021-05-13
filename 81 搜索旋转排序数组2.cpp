#if 0
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,r=n;

        while(l<r)
        {
            int p= (l+r)/2;
            if (nums[p]==target)
                return true;
            else if (nums[p]<target)
                l=p+1;
            else if (nums[p]>target)
                r=p;

        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums={1,0,1,1,1};
    if (s.search(nums,0))
        printf("true");
    else
        printf("false");
    return 0;
}

#endif // 1
