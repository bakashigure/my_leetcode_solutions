//
// Created by bakashigure on 1/4/2022.
//
#if 0

#include <bits/stdc++.h>
#define ll long long
#define INF 0x3f3f3f3f
#define MOD 1e9+7
#define EXP 1e-8
#define debug(a) cout<<#a<<"- "<<a<<endl;
#define lowbit(x) (x&-x)
#define v2(m,n) vector<vector<int>>(m,vector<int>(n))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define IOS ios::sync_with_stdio(false);
ll qpow(ll p,ll q) {ll f=1;while(q){if(q&1)f=f*p;p=p*p;q>>=1;}return f;}

using namespace std;

//约瑟夫环
//f(i)是序列[1,i]从左往右隔个消除一次后最终左侧的数字，f'(i)是从右往左隔个消除一次后最终右侧的数字，则有f(i)+f'(i)=i+1
// EXAMPLE:
//  [1,8] : 1,2,3,4,5,6,7,8
// f(i) = 2,4,6,8 -> 2
// f'(i) = 1,3,5,7 -> 7
// f(i)+f'(i) = 2+7 = 9 = 8+1
//如果将序列从左向右消除一次，则剩下的序列长度为[i/2]（[]代表向下取整）
//最开始的序列是1，2，...，i，消除完后，剩下的序列为：2,4,...,x(x取值与i有关，如果是奇数则为i-1，偶数则为i）
//然后考虑对剩下的序列进行有序重排，则变成1,2,3,...,[i/2]，然后对其进行从右向左的消除，也即f'([i/2])
//将得到的新序列映射回之前的序列，则有f(i)=f'([i/2]) * 2
//带入之前的公式，有f(i) = 2 * ([i/2] + 1 - f([i/2])
//注意考虑题意后的特殊条件f(1)=1
class Solution {
public:
    int lastRemaining(int n) {
        return n == 1 ? 1 : 2*( n/2+1 - lastRemaining(n/2) );
    }
};

#endif

