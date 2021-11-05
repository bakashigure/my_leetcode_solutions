#if 0
#include <__msvc_all_public_headers.hpp>
using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> cans;
        int type = 0;
        for (int& candy : candyType)
        {
            if (!cans[candy]) type++;
            cans[candy] = 1;
        }
        return type < (candyType.size() / 2) ? type : (candyType.size() / 2);

    }
};

#endif