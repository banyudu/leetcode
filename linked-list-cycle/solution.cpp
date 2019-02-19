#include "../common.h"

class Solution
{
  public:
    bool hasCycle(ListNode *head)
    {
        unordered_set<ListNode *> nodes;
        while (head)
        {
            if (nodes.find(head) == nodes.end())
            {
                nodes.insert(head);
                head = head->next;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};