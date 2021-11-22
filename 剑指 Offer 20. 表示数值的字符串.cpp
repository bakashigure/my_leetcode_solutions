#if 0
//
// Created by bakashigure on 11/10/2021.
//
#define um unordered_map<char,int>
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isNumber(string s) {
        // 搞点自动机
        vector<unordered_map<char, int>> states;
        states.emplace_back(um{{' ', 0},{'s', 1},{'d', 2},{'.', 4}});
        states.emplace_back(um{{'d', 2},{'.', 4}});
        states.emplace_back(um{{'d', 2},{'.', 3},{'e', 5},{' ', 8}});
        states.emplace_back(um{{'d', 3},{'e', 5},{' ', 8}});
        states.emplace_back(um{{'d', 3}});
        states.emplace_back(um{{'s', 6},{'d', 7}});
        states.emplace_back(um{{'d', 7}});
        states.emplace_back(um{{'d', 7},{' ', 8}});
        states.emplace_back(um{{' ', 8}});
        int p = 0;
        char t;
        for (const auto &c: s) {
            if (c >= '0' && c <= '9') t = 'd';
            else if (c == '+' || c == '-') t = 's';
            else if (c == 'e' || c == 'E') t = 'e';
            else if (c == '.' || c == ' ') t = c;
            else t = '?';
            if (states[p].find(t)==states[p].end()) return false;
            p = states[p][t];
        }
        return p == 2 || p == 3 || p == 7 || p == 8;
    }
};

int main()
{
    Solution s;
    cout<<s.isNumber(" 0");
    return 0;
}
#endif
