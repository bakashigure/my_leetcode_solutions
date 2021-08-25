#if 0
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        int m = graph.size() - 1;
        vector<int> tmp;
        function<void(int x)> dfs = [&](int x)-> void {
            if (x == m) {
                ans.push_back(tmp);
                return;
            }
            for (auto& it : graph[x])
            {
                tmp.push_back(it);
                dfs(it);
                tmp.pop_back();
            }

        };
        tmp.push_back(0);
        dfs(0);
        return ans;

    }
};

int main()
{

}

#endif