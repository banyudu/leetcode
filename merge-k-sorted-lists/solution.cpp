#include "../common.h"

class Solution
{
  public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *min = nullptr;
        int minIndex = 0;
        int index = 0;
        for (auto item : lists)
        {
            if (item)
            {
                if (!min || (item->val < min->val))
                {
                    min = item;
                    minIndex = index;
                }
            }
            index++;
        }

        auto result = min;
        if (result)
        {
            lists[minIndex] = min->next;
            result->next = this->mergeKLists(lists);
        }
        return result;
    }
};