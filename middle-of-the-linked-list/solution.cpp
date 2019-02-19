#include "../common.h"

class Solution
{
  public:
    ListNode *middleNode(ListNode *head)
    {
        auto index = head;
        int count = 0;
        while (index)
        {
            count++;
            index = index->next;
        }
        int half = count / 2 + 1;
        while (--half)
        {
            head = head->next;
        }
        return head;
    }
};