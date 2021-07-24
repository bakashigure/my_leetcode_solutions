#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*pre(i,j)=pre(i−1,j)⊕pre(i,j−1)⊕pre(i−1,j−1)⊕matrix(i,j)
* 经典前缀和
*/
class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        vector<vector<int> >pre(n+1,vector<int>(m+1));
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                pre[i][j] = pre[i - 1][j] ^ pre[i][j - 1] ^ pre[i - 1][j - 1] ^ matrix[i-1][j-1];
                ans.push_back(pre[i][j]);
            }
        }
        // 选择第几大的元素，放在第几位(绝对位置)
        nth_element(ans.begin(), ans.begin() + k-1, ans.end(),greater<int>());
        //for (auto c : ans)
        //    cout << c << " ";
        return ans[k-1];
    }
};

int main()
{
    vector<vector<int> >matrix = { {5,2},{1,6} };
    int k=1;
    Solution s;
    int res = s.kthLargestValue(matrix, k);
    cout << res;
    return 0;
}
#endif