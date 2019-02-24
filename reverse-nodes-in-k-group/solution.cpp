#include "../common.h"

class Solution
{
  public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (!head)
        {
            return nullptr;
        }
        ListNode *h = head;
        ListNode *e = head;
        int i = 1;
        for (; i < k && e->next; i++)
        {
            auto tmp = e->next->next;
            e->next->next = h;
            h = e->next;
            e->next = tmp;
        }
        if (i != k)
        {
            return h->next ? this->reverseKGroup(h, i) : h;
        }
        e->next = this->reverseKGroup(e->next, k);
        return h;
    }
};