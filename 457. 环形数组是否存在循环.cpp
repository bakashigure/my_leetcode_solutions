#if 0
#include <iostream>
#include <vector>
#include <functional>


using namespace std;

class Solution {
public:
	bool circularArrayLoop(vector<int>& nums)
	{
		int n = nums.size();
		function<int(int)> next = [&](int cur)->int
		{
			return ((cur + nums[cur]) % n + n) % n;
		};
		for (int i = 0; i < n; i++)
		{
			if (!nums[i]) continue;

			int slow = i;
			int fast = next(i);
			while (nums[slow] * nums[fast] > 0 && nums[slow] * nums[next(fast)] > 0)
			{
				if (slow == fast)
					if (slow != next(slow)) return true;
					else break;
				
				slow = next(slow);
				fast = next(next(fast));
			}
			
			int add = i;
			while (nums[i] * nums[next(i)] > 0)
			{
				int tmp = add;
				add = next(add);
				nums[tmp] = 0;
			}



		}
		return false;

	}
};


int main()
{}

#endif