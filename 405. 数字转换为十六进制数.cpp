#if 0
#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <climits>
#include <unordered_map>
#include <algorithm>

using namespace std;


class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        string res;
        
        unordered_map<int, string> hex = {
            {0,"0"},
            {1,"1"},
            {2,"2"},
            {3,"3"},
            {4,"4"},
            {5,"5"},
            {6,"6"},
            {7,"7"},
            {8,"8"},
            {9,"9"},
            {10,"a"},
            {11,"b"},
            {12,"c"},
            {13,"d"},
            {14,"e"},
            {15,"f"}
        };
        
        //string hex = "0123456789abcdef";
        long tmp = num;
        if (num < 0) tmp = num + 4294967296;

        while (tmp > 0)
        {
            long long u = tmp % 16;
            res = hex[u] + res;
            tmp /= 16;
        }
        return res;

    }
};

int main()
{}

#endif