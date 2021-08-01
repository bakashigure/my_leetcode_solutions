#if 0
#include <iostream>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) :val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) :val(x), next(next) {}
};

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head)
	{
		ListNode* pre = new ListNode(-200, head);
		ListNode* cur = pre;
		while (cur->next && cur->next->next)
		{
			if (cur->next->val == cur->next->next->val)
			{
				int tmp = cur->next->val;
				while (cur->next && cur->next->val == x)
				{
					cur->next = cur->next->next;
				}
			}
			else cur = cur->next;
		}
		return pre->next;
	}
};

int main()
{

}

#endif