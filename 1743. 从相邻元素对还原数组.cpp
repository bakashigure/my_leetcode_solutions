#if 0
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> restoreArray(vector<vector<int>>& adjacentPairs)
	{
		int n = adjacentPairs.size();
		vector<int> res(n+1);
		unordered_map<int, vector<int>> m;
		for (auto& p : adjacentPairs)
		{
			m[p[0]].push_back(p[1]);
			m[p[1]].push_back(p[0]);
		}
		// 1,2 1,3
		// 1: 2,3
		// 2: 1
		// 3: 1

		// 2,1,?
		for(auto& [k,v]:m)
		{
			if (v.size() == 1)
			{
				res[0] = k;
				break;
			}
		}
		res[1] = m[res[0]][0];
		for (int i = 2; i <= n; i++)
		{
			res[i] = m[res[i - 1]][0] == res[i - 2] ? m[res[i - 1]][1] : m[res[i - 1]][0];
		}
		return res;

	}
};


#endif