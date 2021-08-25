#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        const int INF = 0x3f3f3f3f;
        vector<int> f(n, INF);
        f[src] = 0;
        int ans = INF;
        for (int i = 0; i < k+1; ++i)
        {
            vector<int> g(n, INF);
            for (auto& flight : flights)
            {
                int _src = flight[0];
                int _dst = flight[1];
                int cost = flight[2];
                g[_dst] = min(g[_dst], f[_src] + cost);
            }
            f = move(g);
            ans = min(ans, f[dst]);
        }
        return ans == INF ? -1 : ans;

    }
};

#endif