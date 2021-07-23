#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution
{
public:
	// 差分数组
	/*
	bool isCovered(vector<vector<int>>& ranges, int left, int right) {
		{

		}
	*/




	/* 暴力 */
	bool isCovered(vector<vector<int>>& ranges, int left, int right) {
		sort(ranges.begin(), ranges.end());
		for (auto item : ranges)
		{
			while (left >= item[0] && left <= item[1])
				left++;
			while (right >= item[0] && right <= item[1])
				right--;
			if (left > right) return true;

			
		}
		return false;

		
	}

};

int main()
{
	Solution s;
	vector<vector<int>> ranges = { {36,50},{14,28},{4,31},{24,37},{13,36},{27,33},{23,32},{23,27},{1,35} };
	int left = 35;
	int right = 40;
	cout << s.isCovered(ranges, left, right);
	return 0;

}
#endif