//
// Created by bakashigure on 11/18/2021.
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


struct TreeNode {
      int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int findTilt(TreeNode* root) {
        int ans = 0;
        int l=0,r=0;
        function<void(TreeNode* node)> dfs=[&](TreeNode* node) -> void {
            if (node==nullptr) return;
            dfs(node->left);
            dfs(node->right);
            l = node->left? node->left->val:0;
            r = node->right? node->right->val:0;
            ans+=abs(l-r);
            node->val +=l+r;
        };dfs(root);
        return ans;
    }
};

// 7: 7-1=6  7:7+1+7=15    14:2+2+14=18 6+3=9

//
int main()
{

}

#endif