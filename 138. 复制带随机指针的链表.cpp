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

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> f;
        function<Node* (Node* h)> dfs = [&](Node* h) -> Node* {
            if (!h) return nullptr;
            if(!f[h]){
                Node *node = new Node(h->val);
                f[h] = node;
                node->next = dfs(h->next);
                node->random = dfs(h->random);
                return node;
            }
            else return f[h];
        };dfs(head);
        return f[head];
    }
};

#endif


