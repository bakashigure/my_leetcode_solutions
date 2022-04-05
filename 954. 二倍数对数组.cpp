//
// Created by bakashigure on 4/1/2022.
//

// https://leetcode-cn.com/problems/array-of-doubled-pairs/
//给定一个长度为偶数的整数数组 arr，只有对 arr 进行重组后可以满足 “对于每个 0 <= i < len(arr) / 2，都有 arr[2 * i + 1] = 2 * arr[2 * i]” 时，返回 true；否则，返回 false。
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

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int> um;

        for(int v:arr) ++um[v];
        vector<int> vec;
        vec.reserve(um.size());
        for(auto [x,_]:um)
            vec.emplace_back(x);
        sort(vec.begin(),vec.end(),[](int a,int b){return abs(a)<abs(b);});
        for(int x:vec)
        {
            if(um[x*2]<um[x]) return false;
            um[x*2] -= um[x];
        }
        return true;

    }
};

#endif
