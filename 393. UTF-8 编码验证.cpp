//
// Created by bakashigure on 3/13/2022.
//
#if 0

#include <bits/stdc++.h>
#define ll long long
#define INF 0x3f3f3f3f
#define MOD 1e9+7
#define EXP 1e-8
#define debug(a) cout<<#a<<"- "<<a<<endl;
#define lowbit(x) (x&(-x))
#define v2(m,n) vector<vector<int>>(m,vector<int>(n))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define IOS ios::sync_with_stdio(false);
ll qpow(ll p,ll q) {ll f=1;while(q){if(q&1)f=f*p;p=p*p;q>>=1;}return f;}

using namespace std;

class Solution {
public:
    bool validUtf8(vector<int>& data) {
        for(int i=0;i<data.size();)
        {
            if(data[i]<128) {i++;continue;};
            if(128<data[i] && data[i]<192) return false;
            else{
                int cnt = 0;
                for(int flag = 7; flag>=1;flag--)
                {
                    int tmp = data[i]>>flag;
                    if((tmp&(-tmp))==1 )
                        cnt++;
                    else
                        break;
                }
                if(cnt)
                {
                    if(cnt>4) return false;
                    if(i+cnt-1 >= data.size()) return false;
                    for(int k =1;k<cnt;++k)
                    {
                        if((data[i+k]>=128) &&((data[i+k]-128)<64))
                            continue;
                        else return false;
                    }
                    i = i + cnt;
                }
                else i++;
            }
        }
        return true;

    }
};

int main()
{
    //vector<int> data{235,140,4};
    //vector<int> data{197,130,1};
    vector<int> data{250,145,145,145,145};
    Solution s;
    cout<<s.validUtf8(data);
    return 0;
}

#endif

