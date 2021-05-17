#if 0
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int leastBricks(vector<vector<int> >& wall) {
        unordered_map<int, int> m;
        int n = wall.size();
        for (int i = 0; i < n; i++)
        {
            int cur = 0;
            for (auto it = wall[i].begin() ;it!=wall[i].end()-1;it++)
            {
                cur += *it;
                m[cur]++;
            }
        }
        int tmp = 0;
        for (auto& [u, cnt] : m)
            tmp = max(tmp, cnt);



        return n-tmp;
        
    }
};

int main()
{
    vector<vector<int> > wall = { {1,2,2,1},{3,1,2}, {1,3,2}, {2, 4}, { 3,1,2 }, { 1,3,1,1 }
};
    Solution s;
    int res = s.leastBricks(wall);
    cout << res;

}

#endif