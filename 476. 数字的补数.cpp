#if 0
#include <__msvc_all_public_headers.hpp>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int highbit = 0;
        for (int i = 1; i <= 30; i++)
        {
            if (num >= (1 << i))
                highbit = i;
            else break;
        }
        return num ^ (highbit == 30 ? 2147483647 : (1 << (highbit+1))-1);
    }
};


int main()
{

    return 0;
}


#endif