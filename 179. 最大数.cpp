#if 0
#include <bits/stdc++.h>
using namespace std;

bool compare(string a,string b)
{
    return a+b>b+a;

};

class Solution
{
public:
    string largestNumber(vector<int>& nums)
    {
        vector<string> sb;
        int n =nums.size();
        string ans;
        for(int i=0; i<n; i++)
        {
            sb.push_back(to_string(nums[i]));
        }

        sort(sb.begin(),sb.end(),compare);
        for(int i=0; i<n; i++)
            ans+=sb[i];
        if (ans[0] == '0')
            return "0";
        return ans;
    }

};


int main()
{
    vector<int> nums = {3,30,34,5,9};
    Solution s;
    string res=s.largestNumber(nums);
    printf("%s",res.c_str());
    return 0;
}

#endif // 1
