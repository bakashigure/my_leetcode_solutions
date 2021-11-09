#if 0
//
// Created by bakashigure on 11/9/2021.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        for(auto &num:nums)
            x^=num;
        for(int i=0;i<=n;i++)
            x^=i;
        return x;
    }
};

#endif

