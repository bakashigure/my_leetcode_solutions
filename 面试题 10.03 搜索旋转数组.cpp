#if 0
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int l =0,r=n-1;
        while(l<r && arr[0]==arr[r]) r--;
        if (r==0)
            return arr[0]==target ? 0 : -1;
        else if (r==1)
        {
            if(arr[0]==target)
                return 0;
            else if (arr[1]==target)
                return 1;
            else
                return -1;
        }
        while(l<r)
        {
            int mid = l+r+1>>1;
            if (arr[0]<=arr[mid])
                l=mid;
            else
                r=mid-1;
        }

        if (target>=arr[0])
        {
            l=0;
        }
        else
        {
            l++;
            r=n-1;
        }

        int res=-1;
        while(l<r)
        {
            int mid = l+r+1>>1;
            if (arr[mid]==target)
            {
                res=mid;
                break;
            }
            else if (target <=arr[mid])
                r=mid-1;
            else
                l=mid;
        }
        while(res>0 &&arr[res]==arr[res-1]) res--;

        //printf("l:%d r:%d\n",l,r);
        return res;
    }
};

int main()
{
  vector<int> nums={1,-2};
  int target=-2;
  Solution s;
  int res = s.search(nums,target);
  printf("%d",res);
  return 0;
}

#endif // 1
