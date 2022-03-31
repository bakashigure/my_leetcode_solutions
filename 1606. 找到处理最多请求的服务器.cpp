//
// Created by bakashigure on 3/31/2022.
//

// https://leetcode-cn.com/problems/find-servers-that-handled-most-number-of-requests/
//你有 k 个服务器，编号为 0 到 k-1 ，它们可以同时处理多个请求组。每个服务器有无穷的计算能力但是 不能同时处理超过一个请求 。请求分配到服务器的规则如下：
//
//第 i （序号从 0 开始）个请求到达。
//如果所有服务器都已被占据，那么该请求被舍弃（完全不处理）。
//如果第 (i % k) 个服务器空闲，那么对应服务器会处理该请求。
//否则，将请求安排给下一个空闲的服务器（服务器构成一个环，必要的话可能从第 0 个服务器开始继续找下一个空闲的服务器）。比方说，如果第 i 个服务器在忙，那么会查看第 (i+1) 个服务器，第 (i+2) 个服务器等等。
//给你一个 严格递增 的正整数数组 arrival ，表示第 i 个任务的到达时间，和另一个数组 load ，其中 load[i] 表示第 i 个请求的工作量（也就是服务器完成它所需要的时间）。你的任务是找到 最繁忙的服务器 。最繁忙定义为一个服务器处理的请求数是所有服务器里最多的。
//
//请你返回包含所有 最繁忙服务器 序号的列表，你可以以任意顺序返回这个列表。

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
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        priority_queue<pii, vector<pii >, greater<pii>> busy; // k:endTime v:id
        set<int> available;
        vector<int> requests(k, 0);
        vector<int> ret;
        int max_request = 0;

        for (int i = 0; i < k; ++i) available.emplace(i);

        for (int i = 0; i < arrival.size(); ++i) {
            while (!busy.empty() && busy.top().first <= arrival[i]) {
                available.emplace(busy.top().second);
                busy.pop();
            }
            if (available.empty()) continue;
            auto pos = available.lower_bound(i % k);
            if (pos == available.end())
                pos = available.begin();
            requests[*pos]++;
            max_request = max(requests[*pos], max_request);
            busy.push({arrival[i] + load[i], *pos});
            available.erase(pos);
        }
        for (int i = 0; i < k; i++) {
            if (requests[i] == max_request)
                ret.emplace_back(i);
        }
        return ret;
    }
};


#endif