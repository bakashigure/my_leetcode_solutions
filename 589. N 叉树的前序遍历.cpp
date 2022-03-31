//
// Created by bakashigure on 3/11/2022.
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

// Definition for a Node.
class Node{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node *> _children) {
        val = _val;
        children = _children;
    }
};


class Solution{
public:
    vector<int> preorder(Node *root) {
        vector<int> ret;
        function<void(Node *)> dfs = [&](Node *node) {
        if(node){
            ret.emplace_back(node->val);
            for(auto& c:node->children)
            {
                dfs(c);
            }
         }

        };
        dfs(root);
        return ret;
    }
};

#endif


