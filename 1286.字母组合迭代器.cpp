/*
 * @lc app=leetcode.cn id=1286 lang=cpp
 *
 * [1286] 字母组合迭代器
 */

#include <bits/stdc++.h>

// @lc code=start
/*思路是打表, 生成cnk的全排列,

*/
class CombinationIterator {
public:
    CombinationIterator(std::string characters, int combinationLength) {
        int n = characters.size();
        std::vector<int> cnk(n, 1);

        std::fill(cnk.begin() + combinationLength, cnk.end(), 0);

        do {
            std::string record = "";
            for (int i = 0; i < n; ++i) {
                if (cnk[i]) {
                    record += characters[i];
                }
            }
            vec.emplace_back(record);
        } while (std::prev_permutation(cnk.begin(), cnk.end()));
    }
    
    std::string next() {
        return vec[pos++];
    }
    
    bool hasNext() {
        return pos < vec.size();
    }
private:
    int pos = 0;
    std::vector<std::string> vec;
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end


int main()
{
    CombinationIterator c("abcde", 4);
    c.hasNext();
    c.next();

    return 0;
}

