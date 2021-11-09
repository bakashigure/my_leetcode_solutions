#if 0
//
// Created by bakashigure on 11/9/2021.
//

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string replaceSpace(string s) {
        stringstream ss;
        string res;
        for(auto& c:s)
            if(c==' ') ss<<"%20";
            else ss<<c;
        ss>>res;
        return res;
    }
};
#endif

