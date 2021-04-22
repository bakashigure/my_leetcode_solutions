#if 0
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // KMP
    int strStr(string haystack, string needle) {
        int n =haystack.length();
        int m =needle.length();
        if (m==0) return 0;
        haystack=" "+haystack;
        needle=" "+needle;
        vector<int> next(m+1);
        for(int i=2,j=0;i<=m;i++)
        {
            while( j>0 && needle[i]!=needle[j+1])
                j=next[j];
            if(needle[i]==needle[j+1]) j++;
            next[i]=j;
        }

        for(int i=1,j=0;i<=n;i++)
        {
            while(j && haystack[i]!=needle[j+1]) j=next[j];
            if(haystack[i]==needle[j+1]) j++;
            if(j==m) return i-m;
        }
        return -1;
    }
};

int main()
{
 string aa="mississippi";
 string bb="issp";
 Solution s;
 int res = s.strStr(aa,bb);
 printf("%d",res);
 return 0;
}
#endif // 1
