#if 0
#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(nullptr) {}
};

class Solution {
public:
	ListNode* reverseList(ListNode* head)
	{
		ListNode* prev = nullptr;
		ListNode* curr = head;
		while (curr)
		{
			ListNode* p = curr->next;
			curr->next = prev;
			prev = curr;
			curr = p;
		}
		return prev;

	}
	/*ตÝน้
	ListNode* reverseList(ListNode* head)
	{
		if (!head || !head->next) return head;
		ListNode* p = reverseList(head->next);
		head->next->next = head;
		head->next = nullptr;
		return p;
	}
	*/

};

#endif
