//
// Created by bakashigure on 1/6/2022.
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
    string simplifyPath(string path) {
        vector<string> names;
        string cur;
        for (auto c: path) {
            if (c == '/') {
                if (cur.length() != 0) {
                    names.emplace_back(cur);
                    cur.clear();
                }
            } else cur += c;
        }
        if (cur.length() != 0) names.emplace_back(cur);


        deque<string> s;
        for (auto& name: names) {
            if (name == "..")
            {
             if(!s.empty())
                s.pop_back();
            }
            else if(name==".") continue;
            else s.push_back(name);
        }
        string ret="/";
        while(!s.empty()) {
            ret.append(s.front());
            ret.append("/");
            s.pop_front();
        }
        if(ret.length()!=1)
        ret.pop_back();
        return ret;
    }
};

int main()
{
    Solution s;
    s.simplifyPath("/home//foo");
}

#endif
