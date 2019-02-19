#include "../common.h"

class Solution
{
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        stack<int> s1, s2;
        while (l1)
        {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while (l2)
        {
            s2.push(l2->val);
            l2 = l2->next;
        }
        int val = 0;
        bool incr = false;
        ListNode *head = nullptr;

        while (s1.size() || s2.size())
        {
            if (s1.size())
            {
                val += s1.top();
                s1.pop();
            }
            if (s2.size())
            {
                val += s2.top();
                s2.pop();
            }
            incr = val >= 10;
            if (incr)
            {
                val -= 10;
            }
            ListNode *tmp = new ListNode(val);
            tmp->next = head;
            head = tmp;
            val = incr ? 1 : 0;
        }
        if (incr)
        {
            ListNode *tmp = new ListNode(1);
            tmp->next = head;
            head = tmp;
        }
        return head;
    }
};