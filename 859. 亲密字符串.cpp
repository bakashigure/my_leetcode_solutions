//
// Created by bakashigure on 11/23/2021.
//
#if 0

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define MOD 1e9+7
#define EXP 1e-8
#define debug(a) cout<<#a<<"- "<<a<<endl;
#define lowbit(x) (x&-x)
#define v2(m, n) vector<vector<int>>(m,vector<int>(n))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define IOS ios::sync_with_stdio(false);

ll qpow(ll p, ll q) {
    ll f = 1;
    while (q) {
        if (q&1)f = f * p;
        p = p * p;
        q >>= 1;
    }
    return f;
}

using namespace std;

class Solution{
public:
    bool buddyStrings(string s, string goal) {
        int h[26]={0};
        int n = s.length(), m = goal.length();
        if (n != m) return false;
        int l = -1, r = -1;
        int _max = 0;
        for (int i = 0; i < n; ++i) {
            h[s[i] - 'a']++;
            _max = max(_max, h[s[i] - 'a']);
            if (s[i] != goal[i]) {
                if (l == -1) l = i;
                else if (r == -1) r = i;
                else return false;
            }
        }
        if (l>=0 && r>=0) {
            if (s[l] == goal[r] && s[r] == goal[l]) return true;
            else return false;
        }
        else if(l>=0 && r==-1) return false;
        else return _max >=2;
    }
};

int main()
{
    Solution s;
    cout<<s.buddyStrings("ab","ab");
    return 0;
}

#endif

