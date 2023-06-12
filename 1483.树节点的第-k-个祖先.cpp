/*
 * @lc app=leetcode.cn id=1483 lang=cpp
 *
 * [1483] 树节点的第 K 个祖先
 */

#include <bits/stdc++.h>

// @lc code=start
class TreeAncestor {
public:
    TreeAncestor(int n, std::vector<int>& parent) {
        dp = std::vector<std::vector<int>>(n, std::vector<int>(Log,-1));

        for(int i = 0; i < n; i++) {
            dp[i][0] = parent[i];
        }

        for(int j = 1;j<Log;j++) {
            for (int i = 0; i<n;i++)
            {
                if(dp[i][j-1] != -1)
                    dp[i][j] = dp[dp[i][j-1]][j-1];
            }
        }
    }
    
    int getKthAncestor(int node, int k) {
        for(int j =0;j<Log;j++) {
            if( (k>>j)&1 ) {
                node = dp[node][j];
                if(node == -1) return -1;
            }
        
        }
        return node;

    }
private:
    const int Log = 16;
    std::vector<std::vector<int>> dp; 
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */
// @lc code=end

