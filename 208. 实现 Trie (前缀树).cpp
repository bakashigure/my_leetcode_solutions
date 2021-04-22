#if 0
#include <bits/stdc++.h>
using namespace std;


class Trie
{
public:
    /** Initialize your data structure here. */
    bool isEnd;
    Trie *next[26];
    Trie()
    {
        isEnd=false;
        memset(next,0,sizeof(next));

    }

    /** Inserts a word into the trie. */
    void insert(string word)
    {
        Trie* node=this;
        for(char c:word)
        {
            if (node->next[c-'a']==NULL)
            {
                node->next[c-'a']= new Trie();
            }
            node = node->next[c-'a'];
        }
        node->isEnd=true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word)
    {
        Trie *node = this;
        for(char c : word)
        {
            node = node->next[c-'a'];
            if(node == NULL)
                return false;
        }
        return node->isEnd;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {

        Trie *node = this;
        for(char c : prefix)
        {
            node = node->next[c-'a'];
            if(node == NULL)
                return false;
        }
        return true;
    }
};

int main()
{
    return 0;
}

#endif // 1
