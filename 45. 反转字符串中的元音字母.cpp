#if 0
#include <iostream>
#include <functional>
using namespace std;


class Solution {
public:
    string reverseVowels(string s) {
        function<bool(char c)> isVowel = [](char c)->bool {
            return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') ? true : false;
        };

        int l = 0;
        int n = s.length();
        int r = n - 1;
        while (l < r&&l<s.length()-1&&r>0)
        {
            while (!isVowel(s[l])&&l<n) l++;
            while (!isVowel(s[r])&&r>0) r--;
            if (r > l)
            {
                s[l] = s[l] ^ s[r];
                s[r] = s[l] ^ s[r];
                s[l] = s[l] ^ s[r];
                l++;
                r--;
            }
        }
        return s;

    }
};

#endif