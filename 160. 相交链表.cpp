#if 0
#include <iostream>
#include <vector>

using namespace std;


/* ���������Ĳ�ֵ��Ȼ�󳤵ļ�ȥ��ֵ��ʣ����������һ������
* ���������ĵ�һ����ʼ�Ƚϣ���һ��һ���ļ�Ϊ�ཻ�ڵ�.
*/
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lena = 0;
        int lenb = 0;
        auto *p = headA;
        while (p != NULL)
        {
            p = p->next;
            lena++;
        }

        p = headB;
        while (p!=NULL)
        {
            p = p->next;
            lenb++;
        }
        
        int _abs = abs(lena - lenb);
        if (lena > lenb)
        {
            while (_abs--)
                headA = headA->next;
            //cout << headA->val;
        }
        else
        {
            while (_abs--)
                headB = headB->next;
        }
        _abs = max(lena, lenb) - _abs;
        
        while (_abs--)
        {
            if (headA == headB)
                return headA;
            else
            {
                if (headA->next == NULL || headB->next == NULL)
                    return NULL;
                headA = headA->next;
                headB = headB->next;
            }

        }
        
        return NULL;
    }
};

int main()
{
    ListNode a(8);

    ListNode b(4);
    ListNode c(1);
    //a
    ListNode e(4);

    ListNode f(5);

    b.next = &c;
    c.next = &a;
    a.next = &e;
    e.next = &f;



    Solution s;
    
    auto res = s.getIntersectionNode(&a, &b);
    if (res != NULL) cout << res->val;
    else cout << "NULL";

    return 0;


    

    
}

#endif 