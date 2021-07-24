#if 0
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
        vector<int> res(n + 1);
        res[0] = first;
        for (int i = 1; i < n+1; i++)
        {
            res[i] = res[i - 1] ^ encoded[i-1];
        }
        return res;
    }
};

int main()
{
    vector<int> encoded = { 1,2,3 };
    int first = 1;
    Solution s;
    vector<int> res = s.decode(encoded, first);
    for (auto i : res)
        cout << i << " ";
    return 0;
}

#endif