//
// Created by bakashigure on 11/19/2021.
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
ll qpow(ll p,ll q) {ll f=1;while(q){if(q&1)f=f*p;p=p*p;q>>=1;}return f;}

using namespace std;


class MinStack {
public:
    stack<int> _stack;
    stack<int> _min;
    /** initialize your data structure here. */
    MinStack() {
    }

    void push(int x) {
        _stack.push(x);
        if(_min.empty() || x<=_min.top()) _min.push(x);
    }

    void pop() {
        if(_min.top() == _stack.top()) _min.pop();
        _stack.pop();
    }

    int top() {
        return _stack.top();
    }

    int getMin() {
        return _min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */

#endif

