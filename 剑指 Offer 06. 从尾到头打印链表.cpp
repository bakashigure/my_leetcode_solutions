//
// Created by bakashigure on 11/9/2021.
//
#if 0
#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        stack<int> s;
        while(head)
        {
            s.emplace(head->val);
            head=head->next;
        }
        vector<int> ans;
        while(!s.empty())
        {
            ans.emplace_back(s.top());
            s.pop();
        }
        return ans;
    }
};


#endif
