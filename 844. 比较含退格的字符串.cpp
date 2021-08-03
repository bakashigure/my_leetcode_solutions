#if 0
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
	bool backspaceCompare(string s, string t)
	{
		stack<char> a;
		stack<char> b;
		for (char ch : s)
		{
			if (ch == '#')
			{
				if (!a.empty())
					a.pop();
			}
			else a.push(ch);
		}

		for (char ch : t)
		{
			if (ch == '#')
			{
				if (!b.empty())
					b.pop();
			}
			else b.push(ch);
		}

		cout << endl;

		while (!a.empty())
		{
			cout << a.top() << " ";
			a.pop();
		}
		cout << endl;
		while (!b.empty())
		{
			cout << b.top() << " ";
			b.pop();
		}
		return a == b;

	}



};

#endif