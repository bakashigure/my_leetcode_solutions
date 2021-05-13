#if 0
#include <iostream>
#include <vector>

using namespace std;
/* 前缀和解法
* 即sum[i] = sum[0]+sum[1]+...+sum[i-1]
* 考虑下列异或的特性
* 
Q(left, right) 
= arr[left]⊕…⊕arr[right]
= (arr[0]⊕…⊕arr[left−1])⊕(arr[0]⊕…⊕arr[left−1])⊕(arr[left]⊕…⊕arr[right])
= (arr[0]⊕…⊕arr[left−1])⊕(arr[0]⊕…⊕arr[right])
= xors[left]⊕xors[right + 1]
​*/
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        int m = queries.size();
        vector<int> res(m);
        vector<int> pre(n + 1);

        for (int i = 1; i <= n; i++)
        {
            pre[i] = arr[i-1] ^ pre[i - 1];
        }
        
        for (int i = 0; i < m; i++)
        {
            res[i] = pre[queries[i][0]] ^ pre[queries[i][1]+1];
        }
        return res;
       
    }
};

int main()
{
    vector<int> arr = { 4,8,2,10 };
    vector<vector<int> >queries = { {2,3}, {1,3} ,{0,0} ,{0,3} };
    Solution s;
    for (int i : s.xorQueries(arr, queries))
        cout << i << " ";

}


#endif