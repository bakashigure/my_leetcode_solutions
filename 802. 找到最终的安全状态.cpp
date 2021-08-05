#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class Solution {
public:
	vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
		int n = graph.size();
		vector<int> color(n);
		vector<int> ans;
		function<bool(int)> safe = [&](int x) ->bool {
			if (color[x] > 0) return color[x] == 2;
			color[x] = 1;
			for (auto gra : graph[x])
			{
				if (!safe(gra)) return false;
			}
			color[x] = 2;
			return true;
		};
		for (int i = 0; i < n; ++i)
			if (safe(i)) ans.push_back(i);
		return ans;
	}	
}s;

int main()
{
	vector<vector<int>> graph = { {1,2},{2,3},{5},{0},{5},{},{} };
	vector<int> ans = s.eventualSafeNodes(graph);
	for (auto it : ans)
		cout << it << " ";
}

#endif