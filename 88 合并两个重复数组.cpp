
#if 0
#include <bits/stdc++.h>


using namespace std;

class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        for(int i=m,j=0; j<n; j++)
        {
            nums1[i]=nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};

int main()
{
    vector<int> nums1= {1,2,3,0,0,0};
    vector<int> nums2= {2,5,6};
    int m=nums1.size()-3;
    int n=nums2.size();
    Solution s;
    s.merge(nums1,m,nums2,n);
    return 0;

}

#endif // 1
