//
// Created by bakashigure on 4/4/2022.
//

//给定一个链表的头节点  head ，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
//
//如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。 为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。如果 pos 是 -1，则在该链表中没有环。注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。
//
//不允许修改 链表。
//
//
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/linked-list-cycle-ii
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

#if 0

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define MOD 1e9+7
#define EXP 1e-8
#define debug(a) cout<<#a<<"- "<<a<<endl;
#define lowbit(x) (x&-x)
#define v2(m, n) vector<vector<int>>(m,vector<int>(n))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define IOS ios::sync_with_stdio(false);

ll qpow(ll p, ll q) {
    ll f = 1;
    while (q) {
        if (q&1)f = f * p;
        p = p * p;
        q >>= 1;
    }
    return f;
}

using namespace std;


struct ListNode{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* ret = head;
        while(fast)
        {
            slow = slow->next;
            if(fast->next == nullptr) return nullptr;
            fast = fast->next->next;

            if(slow == fast){
                while(ret != slow)
                {
                    ret = ret->next;
                    slow = slow->next;
                }
                return ret;
            }
        }
        return nullptr;
    }
};


#endif
