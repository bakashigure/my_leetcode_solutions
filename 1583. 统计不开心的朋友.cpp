#if 0
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int unhappyFriends(int n, vector<vector<int>>& preferences, vector<vector<int>>& pairs) {
        vector<vector<int>> order(n, vector<int>(n));
        vector<int> match(n);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                order[i][preferences[i][j]] = j;
            }
        }
        for (auto pair : pairs) {
            match[pair[0]] = pair[1];
            match[pair[1]] = pair[0];
        }

        int cnt = 0;

        for (int x = 0; x < n; ++x) {
            int y = match[x];
            int index = order[x][y];
            for (int i = 0; i < index; ++i) {
                int u = preferences[x][i];
                int v = match[u];
                if (order[u][x] < order[u][v]) {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};



#endif