#if 0
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

class Solution {
public:
	vector<int> pathInZigZagTree(int label) {
		vector<int> ans;
		int pre = 0;
		int index = 0;
		int tmp = log(label) / log(2);
		while (tmp > 0)
		{
			ans.push_back(label);
			if (tmp % 2 == 1) // 偶数层, 需要翻转
			{
				index = (1 << (tmp + 1)) - label - 1 + (1 << tmp); //数字在本层的位置
				pre = (index - (1 << tmp)) / 2 + 1; //上一层的数字位置
				label = (1 << (tmp - 1)) + pre - 1; //上一层的数字
			}
			else // 奇数层, 不翻转
			{
				label = (label - (1 << tmp)) / 2 + 1; 
				label = (1 << tmp) - label;
			}				
			tmp = log(label) / log(2);


		}
		ans.push_back(1);
		reverse(ans.begin(), ans.end());
		return ans;
	}
}s;

int main()
{
	vector<int> ans = s.pathInZigZagTree(14);
	for (auto i : ans)
		cout << i << " ";

	cout << INT_MAX<<endl;
	cout << INT_MIN;
	return 0;
}


#endif