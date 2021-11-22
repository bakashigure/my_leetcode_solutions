//
// Created by bakashigure on 11/10/2021.
//
#if 0
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int findPoisonedDuration(vector<int>& timeSeries,int duration)
    {
        int sum=0;
        int cur=0;
        for(const auto&t:timeSeries)
        {
            if(t>=cur)
                sum+=duration;
            else sum+=t+duration-cur;
            cur = t+duration;

        }
        return sum;
    }
};

int main()
{
    cout<<__cplusplus<<endl;
    return 0;
}

#endif
