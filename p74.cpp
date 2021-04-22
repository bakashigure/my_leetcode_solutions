#if 0
#include<bits/stdc++.h>

using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {

        for(auto it = matrix.begin(); it!=matrix.end(); it++)
        {
            for(auto it2 = it->begin(); it2!=it->end(); it2++)
            {
                if( *it2 == target)
                    return true;
                if(*it2 >target)
                    return false;
            }
        }
    }
};
int main()
{
    vector<vector<int>> mat;
    /*
    mat.push_back({1,3,5,7});
    mat.push_back({10,11,16,20});
    mat.push_back({23,30,34,60});
    */
    mat.push_back({1,1});
    Solution s;
    if (s.searchMatrix(mat,1))
        printf("true");
    else
        printf("false");

    return 0;
}
#endif
