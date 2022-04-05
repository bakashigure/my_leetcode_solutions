//
// Created by bakashigure on 4/3/2022.
//

//给你一个排序后的字符列表 letters ，列表中只包含小写英文字母。另给出一个目标字母 target，请你寻找在这一有序列表里比目标字母大的最小字母。
//
//在比较时，字母是依序循环出现的。举个例子：
//
//如果目标字母 target = 'z' 并且字符列表为 letters = ['a', 'b']，则答案返回 'a'
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/find-smallest-letter-greater-than-target
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
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(auto c:letters)
            if(c>target) return c;
        return letters[0];
    }
};

#endif