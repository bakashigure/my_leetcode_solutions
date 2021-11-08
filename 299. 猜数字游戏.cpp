#if 1
#include <__msvc_all_public_headers.hpp>
using namespace std;

class Solution {
public:
	string getHint(string secret, string guess) {
		int A = 0;
		int B = 0;
		vector<int> m(21);
		for (int i = 0; i < secret.length(); ++i)
		{
			if (secret[i] == guess[i]) A++;
			else {
				m[secret[i] - '0']++;
				m[guess[i] - '0' + 10]++;
			}
		}
		for (int i = 0; i < 10; i++)
		{
			B += min(m[i], m[i + 10]);
		}
		return to_string(A) + 'A' + to_string(B) + 'B';
	}
};

#endif