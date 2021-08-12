#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int m = s.size();
        int f = 0;
        for (auto word : words)
        {
            int n = word.size();
            for (int i=0;i<n;i++)
            {
                if (word[i] == s[f])
                {
                    if ((f == m-1)&&i==n-1) return true;
                    f++;
                }
                else {
                    return false;
                }
            }
        }
        return false;
    }
};

#endif