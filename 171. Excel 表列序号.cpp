#if 0
#include <iostream>

using namespace std;

class Solution {
public:
	int titleToNumber(string columnTitle)
	{
		int sum = 0;
		long multiple = 1;
		for (int i = columnTitle.length() - 1; i >= 0; i--)
		{
			sum += (columnTitle[i] - 64) * multiple;
			multiple *= 26;
		}	
		return sum;
	}
}s;

int main()
{
	cout<<s.titleToNumber("FXSHRXW");
	return 0;
}

#endif