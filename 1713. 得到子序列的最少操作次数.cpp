#if 0
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int minOperations(vector<int>& target, vector<int>& arr)
	{
		int n = target.size();
		vector<int> lis;
		unordered_map<int, int> hashset;
		for (int i = 0; i < n; i++)
			hashset.insert({ target[i], i });
		int m = arr.size();
		for (int i = 0; i < m; i++)
		{
			auto it = hashset.find(arr[i]);
			if (it != hashset.end())
				lis.push_back(it->second);
		}

		if (lis.size() == 0) return target.size();

		vector<int> g;
		g.push_back(lis[0]);
		for (int i = 1; i < lis.size(); i++)
		{
			if (lis[i] > g[g.size() - 1])
			{
				g.push_back(lis[i]);
			}
			else {
				auto pos = lower_bound(g.begin(), g.end(), lis[i]) - g.begin();
				g[pos] = lis[i];
			}
		}
		return target.size()-g.size();
	}


};

int main()
{

}

#endif