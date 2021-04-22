#if 0
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isUgly(int n)
    {
        if (n<1) return false;
        while(n%5==0) n/=5;
        while(n%3==0) n/=3;
        while(n%2==0) n/=2;
        return n == 1;

    }
};

int main()
{
    int n;
    n = 5;
    Solution s;
    if (s.isUgly(n))
        printf("yes");
    else
        printf("no");
}
#endif // 1
