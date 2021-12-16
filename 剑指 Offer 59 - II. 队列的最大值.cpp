//
// Created by bakashigure on 12/6/2021.
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

class MaxQueue {
public:
    queue<int> q;
    deque<int> d;
    MaxQueue() {};

    int max_value() {
        return d.empty()?-1:d.front();
    }

    void push_back(int value) {
        q.emplace(value);
        while(!d.empty()&&d.back()<value) d.pop_back();
        d.emplace_back(value);
    }

    int pop_front() {
        int v = q.empty()?(-1):q.front();
        if( !q.empty() && q.front()==d.front()) {
            d.pop_front();
        }
        if(!q.empty()) q.pop();
        return v;
    }
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */


#endif


