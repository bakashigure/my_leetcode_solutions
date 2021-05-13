#if 0
#include <iostream>
#include <vector>


/*在decoded数组中，一位隔一位异或，设ans=可得到perm数组除了最后一位的值,
* 由于perm数组为从1开始的正整数，异或整个长度，在和上面ans异或即为perm数组最后一个的值
* 然后从后往前求即可。
* 
*/
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n = encoded.size();
        vector<int> perm(n + 1);
        int ans = 0;
        for (int i = 1; i <= n+1; i++)
            ans ^= i;

        int tmp = encoded[0];
        for (int i = 2; i < n; i += 2)
            tmp ^= encoded[i];

        perm[n] = ans ^ tmp;

        for (int i = n - 1; i >= 0; i--)
        {
            perm[i] = perm[i + 1] ^ encoded[i];
        }

        
            

            

        return perm;

    }
};

int main()
{
    vector<int> encoded = { 6,5,4,6 };
    Solution s;
    for (int i : s.decode(encoded))
        cout << i << " ";
    return 0;
}

#endif 