#if 0
#include <bits/stdc++.h>

using namespace std;


class Solution
{
public:
    double a;
    double b;
    int opeartor/(const Solution& so2)
    {
        return int(this->a/so2.b);

    }



    int clumsy(int N)
    {

        int ans=0;
        if (N==3)
        {
            return 3*2/1;
        }

        else if (N==2)
        {
            return 2*1;
        }
        else if ( N==1)
        {
            return 1;

        }

        int pre= int(N*(N-1)/(N-2))+(N-3);
        for (int i=N-4 ; i >=0 ; i=i-4)
        {
            if (i==3)
            {
                ans=3*2/1;
                pre-=ans;
                break;
            }

            else if (i==2)
            {
                ans=2*1;
                pre-=ans;
                break;
            }
            else if (i==1)
            {
                ans =1;
                pre-=ans;
                break;


            }
            else if (i<=0)
            {
                break;
            }
            else if (i==4)
            {
                ans=4*3/2-1;
                pre-=ans;
                break;
            }
            else
            {
                pre=pre - int(i*(i-1)/(i-2))+i-3;
            }


        }
        return pre;
    }
};

int main()
{
    Solution solution;
    int num = 0;
    scanf("%d",&num);
    int res=solution.clumsy(num);
    printf("%d",res);

    Solution s1,s2;
    s1.a=5.5;
    s1.b=6.6;
    cout<<s1.a/s1.b;


}



#endif // 1
