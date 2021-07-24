#if 0
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
bool compare(pair<string, int> p, pair<string, int> q)
{
    return p.second != q.second ? p.second > q.second : p.first < q.first;
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> m;
        int n = words.size();
        for (auto&& word:words) ++m[word];
        vector<pair<string, int> > v(m.begin(), m.end());
        auto first = v.begin();
        auto mid = first + k;
        auto last = v.end();
        partial_sort(first, mid, last, compare);
        vector<string> ans;
        for (int i = 0; i < k; i++)
            ans.push_back(v[i].first);
        return ans;
    }
};

int main()
{
    auto words = vector<string>{"i","love","leetcode","i","love","coding"};
    int k = 2;
    Solution s;
    auto res = s.topKFrequent(words, k);
    for (auto word : res)
        cout << word << " ";
    return 0;

}


#endif