#if 0
#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = word.length();
        unordered_map<char, vector<int>> hs;
        for (int i = 0; i < n; i++)
            hs[word[i]].push_back(i);

        int ans = 0;
        for (auto &pattern : patterns)
        {
            auto index = hs.find(pattern[0]);
            if (index != hs.end())
            {
                int m = pattern.length();
                for (int id = 0; id < index->second.size(); id++)
                {
                    int j = 0;
                    int p = index->second[id];
                    while ((j < m && p < n) && pattern[j] == word[p])
                    {
                        j++;
                        p++;
                    }
                    if (j == m) {
                        ans++;
                        break;
                    }
                }
            }
        }
        return ans;
        
    }
}s;

int main()
{
    //vector<string> pa = {"nmksysm","gwjt","vjwxinx","wj","yspxxcv","tpeud","sv","sztjxnrb","smsv","vj","pj","tsmsvj","e","svj","w","vj","awofrm","rshgiiyi","v"};
    vector<string> pa={"sv"};
    string word = "ygwjtsmsvj";
    int res = s.numOfStrings(pa, word);
    cout << res;
    return 0;
}
#endif
