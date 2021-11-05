#if 0
#include <__msvc_all_public_headers.hpp>

using namespace std;

// Definition for a Node.
class Node {
public:
	int val;
	Node* left;
	Node* right;
	Node* next;
	Node() : val(0), left(NULL), right(NULL), next(NULL) {}
	Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
	Node(int _val, Node* _left, Node* _right, Node* _next)
		: val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
	Node* connect(Node* root) {
		if (!root) return NULL;
		queue<Node*> q;
		Node* last = nullptr;
		q.push(root);
		while (!q.empty())
		{
			int n = q.size();
			for (int i = 0; i < n; i++) {
				Node* p = q.front();
				q.pop();
				if (p->left) q.push(p->left);
				if (p->right) q.push(p->right);
				if (i != 0) last->next = p;
				last = p;
			}

		}
		return root;
	}
};

int main()
{

}


#endif