#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findRepeatNumber(vector<int>& nums)
	{

		for (int i = 0; i < nums.size();)
		{
			if (nums[i] == i)
			{
				i++;
				continue;
			}
			if (nums[nums[i]] == nums[i])
			{
				return nums[i];
			}

			nums[i] = nums[i] ^ nums[nums[i]];
			nums[nums[i]] = nums[i] ^ nums[nums[i]];
			nums[i] = nums[i] ^ nums[nums[i]];
		}
		return -1;
	}
};

int main()
{

}

#endif