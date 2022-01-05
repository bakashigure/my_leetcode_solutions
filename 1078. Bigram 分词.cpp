//
// Created by bakashigure on 12/26/2021.
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
    // 好傻逼 这什么玩意 想办法只开一个数组 但是走歪了
    vector<string> findOcurrences(string text, string first, string second) {
        int l = 0;
        int r = 0;
        int _l = 0;
        int _r = 0;
        vector<string> ret = {};
        auto next = [&]() -> string {
            string tmp = "";
            l = r;
            for (; r < text.size(); r++) {
                if (text[r] == ' ') {
                    r++;
                    tmp = text.substr(l, r - l - 1);
                    break;
                } else if (r == text.size() - 1) {
                    tmp = text.substr(l, r - l + 1);
                    if(l==r) tmp = "";
                    break;
                }
            }
            _r = r;
            return tmp;
        };

        auto next2 = [&]() -> string {
            string tmp = "";
            _l = _r;
            for (; _r < text.size(); _r++)
            {
                if (text[_r] == ' ') {
                    _r++;
                    tmp = text.substr(_l, _r - _l - 1);
                    break;
                } else if (_r == text.size() - 1) {
                    _r++;
                    tmp = text.substr(_l, _r - _l);
                    break;
                }
            }
            if(_r == text.size()+1) tmp = "";

            return tmp;
        };

        while (1) {
            string tmp = next();
            if (tmp == ""|| tmp ==  to_string( text[text.size()-1] )) break;
            else if (tmp == first) {
                tmp = next2();
                if (tmp == "") break;
                else if (tmp == second) {
                    tmp = next2();
                    if (tmp != "") ret.emplace_back(tmp);
                    else break;
                }
            }

        }

        return ret;
    }
};

int main() {
    Solution s;
    auto ret = s.findOcurrences("alice is a good girl she is a good student", "a", "good");
    for (auto it: ret)
        cout << it << "\n";
    return 0;
}


#endif

