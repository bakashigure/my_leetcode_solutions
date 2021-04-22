#if 0

#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int search(vector<int> &nums,int target)
    {

        vector<int> s;
        s.push_back(target);
        sort(nums.begin(),nums.end());

        int pos=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if (pos == nums.size())
            return -1;
        return pos;
    }
};

int main()
{
    vector<int> nums= {1,2,3,4,5};
    Solution s;
    int pos =s.search(nums,9);
    printf("%d",pos);
    return 0;
}



/*
class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int n=nums.size();
        if (n == 1)
        {
            if (nums[0]==target)
                return 0;
            else
                return -1;
        }

        int l=0;
        int r=n-1;
        while(l < r)
        {
            int mid= (l+r+1)/2;
            if (nums[mid]>=nums[0])
                l=mid;
            else
                r=mid-1;
        }

        if (target>=nums[0])
            l=0;
        else
        {
            l=l+1;
            r=n-1;
        }

        while(l<r)
        {
            int mid = (l+r)/2;
            if (nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                l=mid+1;
            else r=mid;
        }
    if(nums[r]==target)
        return r;
    return -1;
    }
};

int main()
{
    vector<int> nums= {1,3};
    Solution s;
    int res =  s.search(nums,3);
    printf("%d",res);
    return 0;
}
*/
#endif // 1
