//
// Created by bakashigure on 11/24/2021.
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
    //zero one two three four five six seven eight nine
    /*
     * e 0 1 3 5 7 8 9
     * f 4 5
     * g 8
     * h 3 8
     * i 5 6 8 9
     * n 1 7 9
     * o 0 1 2 4
     * r 0 3 4
     * s 6 7
     * t 2 3 8
     * u 4
     * v 5 7
     * w 2
     * x 6
     * z 0
     */
    // 0 -> 2 > 4 > 6 > 8 -> 7 -> 3 -> 5 -> 9 -> 1
    string originalDigits(string s) {
        int hash[26]={0};
        int ans[10] = {0};
        for(char& c: s) hash[c-'a']++;
        ans[0] = hash['z'-'a'];
        ans[2] = hash['w'-'a'];
        ans[4] = hash['u'-'a'];
        ans[6] = hash['x'-'a'];
        ans[8] = hash['g'-'a'];
        ans[7] = hash['s'-'a'] - ans[6];
        ans[3] = hash['h'-'a'] - ans[8];
        ans[5] = hash['v'-'a'] - ans[7];
        ans[9] = hash['i'-'a'] - ans[5] -ans[6] -ans[8];
        ans[1] = hash['o'-'a'] - ans[0] - ans[2]-ans[4]; // don`t use n, because 9 have 2'n' char
        stringstream ss;
        auto str = [&](char c,int num){return string(num,c);};
        for(int i=0;i<10;++i)
            ss<< str(char(i+'0'),ans[i]);
        return ss.str();
    }
};

#endif

