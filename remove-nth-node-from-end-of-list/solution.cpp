#include "../common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
  public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (!head || !n)
        {
            return head;
        }
        int len = 0;
        ListNode *index = head;
        while (index)
        {
            len++;
            index = index->next;
        }
        if (len == n)
        {
            return head->next;
        }
        index = head;
        for (int i = len - n - 1; i > 0; i--)
        {
            index = index->next;
        }
        if (index && index->next)
        {
            index->next = index->next->next;
        }
        return head;
    }
};