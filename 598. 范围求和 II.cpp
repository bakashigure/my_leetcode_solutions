#if 0
//
// Created by bakashigure on 11/9/2021.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_m = m,min_n = n;
        for(auto &op:ops)
            min_m=min(min_m,op[0]),min_n = min(min_n,op[1]);
        return min_m*min_n;
    }
};
#endif

