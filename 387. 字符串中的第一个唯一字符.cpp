#if 0
#include <iostream>

using namespace std;

class Solution
{
public:
	int firstUniqChar(string s) {
		int map[26] = { 0 };
		for (char c : s) map[c - 97]++;
		for (int i = 0; i < s.length(); i++)
		{
			if (map[s[i] - 97] == 1) return i;
		}
		return -1;
	}
};

int main()
{

}

#endif