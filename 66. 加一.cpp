#if 0
#include <__msvc_all_public_headers.hpp>
using namespace std;

// Ä£ÄâÒ»fa
class Solution {
public:
	vector<int> plusOne(vector<int>& digits)
	{
		int n = digits.size() - 1;
		if (digits[n] == 9)
		{
			while (n >= 0)
			{
				if (digits[n] == 9)
				{
					digits[n] = 0;
				}
				else {
					digits[n] += 1;
					break;
				}
				n--;
			}
			if (digits[0] == 0)
			{
				digits[0] = 1;
				digits.push_back(0);
			}
		}
		else digits[n] += 1;
		return digits;
	}
};


int main()
{

}


#endif