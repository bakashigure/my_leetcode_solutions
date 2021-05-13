#if 0
#include <iostream>
#include <vector>


/*��decoded�����У�һλ��һλ�����ans=�ɵõ�perm����������һλ��ֵ,
* ����perm����Ϊ��1��ʼ��������������������ȣ��ں�����ans���Ϊperm�������һ����ֵ
* Ȼ��Ӻ���ǰ�󼴿ɡ�
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