#include "../common.h"

class Solution
{
  public:
    ListNode *swapPairs(ListNode *head)
    {
        if (!head || !head->next)
        {
            return head;
        }
        auto newHead = head->next;
        auto next = newHead->next;
        newHead->next = head;
        head->next = this->swapPairs(next);
        return newHead;
    }
};