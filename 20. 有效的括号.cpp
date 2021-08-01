#if 0
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
	bool isValid(string s) {
		int n = s.size();
		if (n & 1) return false;
		stack<char> words;
		for (char ch : s)
		{
			if (words.empty())
			{
				words.push(ch);
			}
			else {
				if (ch == ')')
				{
					if (words.top() == '(') words.pop();
					else words.push(ch);
				}
				else if (ch == ']')
				{
					if (words.top() == '[') words.pop();
					else words.push(ch);
				}
				else if (ch == '}')
				{
					if (words.top() == '{') words.pop();
					else words.push(ch);
				}
				else words.push(ch);
			}
		}
		while (!words.empty()) {
			cout << words.top() << " ";
			words.pop();
		}
		return words.empty();
	}
}s;

int main()
{
	s.isValid("{[]}");
}
#endif