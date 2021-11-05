#if 0
#include <__msvc_all_public_headers.hpp>

using namespace std;

class Solution {
public:

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int res = 0;
        vector<int> parents(n);
        for (int i = 0; i < n; i++) parents[i] = i;
        function<int(int index)> Find = [&](int index) -> int {
            if (parents[index] != index)
                parents[index]=Find(parents[index]);
            return parents[index];
        };
        function<void(int index1, int index2)> Union = [&](int index1, int index2) -> void {
            parents[Find(index1)] = Find(parents[index2]);
        };
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (isConnected[i][j] == 1) Union(i, j);
            }
        }
        for (int i = 0; i < n; i++)
            if (parents[i] == i) res++;
        return res;


    }
};

int main()
{

}


#endif