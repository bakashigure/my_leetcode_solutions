#if 0
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string res;
        unordered_map<string, string> m;
        for (auto& path : paths)
        {
            m[path[0]] = path[1];
        }
        
        for (auto& s : m)
        {
            if (m.count(s.second) == 0)
            {
                res = s.second;
                break;
            }
            }
        return res;
    }
};

int main()
{

}


#endif