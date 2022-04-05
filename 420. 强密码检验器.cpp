//
// Created by bakashigure on 4/2/2022.
//

//如果一个密码满足下述所有条件，则认为这个密码是强密码：
//由至少 6 个，至多 20 个字符组成。
//至少包含 一个小写 字母，一个大写 字母，和 一个数字 。
//同一字符 不能 连续出现三次 (比如 "...aaa..." 是不允许的, 但是 "...aa...a..." 如果满足其他条件也可以算是强密码)。
//给你一个字符串 password ，返回 将 password 修改到满足强密码条件需要的最少修改步数。如果 password 已经是强密码，则返回 0 。
//
//在一步修改操作中，你可以：
//
//插入一个字符到 password ，
//从 password 中删除一个字符，或
//        用另一个字符来替换 password 中的某个字符。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/strong-password-checker
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

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
    int strongPasswordChecker(string password) {
        int HAS_NUMBER = 0;
        int HAS_LOWER = 0;
        int HAS_UPPER = 0;

        for(auto c:password)
        {
            if(c>='a'&&c<='z') HAS_LOWER = 1;
            else if(c>='0'&&c<='9') HAS_NUMBER = 1;
            else if(c>='A'&&c<='Z') HAS_UPPER = 1;
        }
        int m = HAS_LOWER + HAS_NUMBER + HAS_UPPER;
        int n = password.size();
        if(n<6)
        {
            return max(6-n,3-m);
        }
        else if(n<=20)
        {
            int ret = 0;
            for(int i =0;i<n;)
            {
                int j = i;
                while(j<n && password[j]==password[i]) j++;
                int cnt = j-i;
                if(cnt>=3) ret+= cnt/3;
                i = j;
            }
            return max(ret,3-m);
        }
        else{
            int total = 0;
            int cnts[3] = {0,0,0};
            for(int i =0;i<n;)
            {
                int j = i;
                while(j<n && password[j]==password[i]) j++;
                int cnt = j-i;
                if(cnt>=3) {total+= cnt/3;++cnts[cnt%3];};
                i = j;
            }
            int base = n-20;
            int cur = base;
            for(int i=0;i<3;++i)
            {
             // 最后剩余的，都将是长度为 5 的连续子串（或者说可以看做都是长度为5的子串），需要进行三次删除操作或一次替换操作

                if(i==2) cnts[i] = total;
                if(cnts[i]!=0 && cur!=0)
                {
                    int t = min(cnts[i]*(i+1),cur);
                    cur-=t; total-=t/(i+1);
                }
            }
            return base + max(total,3-m);

        }
    }
};

#endif
