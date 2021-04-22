#if 0
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int>& height)
    {
        int max_height=0;
        int n = height.size();
        int wall=0;
        for(int i=0; i<n; i++)
        {
            max_height=max(max_height,height[i]);
            wall+=height[i];
        }
        int full=0;
        for(int i=1; i<=max_height; i++)
        {
            int l=0;
            int r=n-1;
            while(height[l]<(i)) l++;
            while(height[r]<(i)) r--;
            if(l<=r) full+=(r-l+1);
            //printf("l:%d r:%d\n",l,r);


        }
        return full-wall;

    }
};

int main()
{
    vector<int> height= {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution s;
    int res=s.trap(height);
    printf("%d",res);
    return 0;
}
#endif // 1
