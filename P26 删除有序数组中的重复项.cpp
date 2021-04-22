#if 0
#include <bits/stdc++.h>

using namespace std;


class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size() == 0)    return 0;
        int n =nums.size();
        int p=0,q=1;
        while(p<n && q<n)
        {
            if(nums[p]==nums[q])
                q++;
            else if(nums[p]!=nums[q])
            {
                nums[p+1]=nums[q];
                p++;
                q++;
            }
        }
        return p+1;
    }
};



int main()
{
    vector<int> s;
    Solution so;
    int tmp;
    while(scanf("%d",&tmp)!=EOF)
        s.push_back(tmp);
    int res=so.removeDuplicates(s);
    printf("%d",res);
    return 0;

}

#endif // 1
