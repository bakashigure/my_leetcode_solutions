#if 0
#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() :val(0), next(nullptr) {}
	ListNode(int x) :val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) :val(x), next(next) {}
};

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head)
	{
		ListNode* cur = head;
		if (!head) return head;
		while (cur&&cur->next)
		{
			int x = cur->val;
			while (cur->next && x == cur->next->val) cur->next = cur->next->next;
			cur = cur->next;
		}
		return head;

	}
};

#endif