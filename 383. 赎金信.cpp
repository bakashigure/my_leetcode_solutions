#if 0
#include <iostream>

using namespace std;

class Solution {
public:
	bool canConstruct(string ransomNote, string magazine)
	{
		int hashtable[26] = { 0 };
		for (auto& c : magazine)
		{
			hashtable[c - 97]++;
		}

		for (auto& c : ransomNote)
		{
			hashtable[c - 97]--;
			if (hashtable[c - 97] == -1)
				return false;
		}
		return true;
	}
};

int main()
{

}
#endif