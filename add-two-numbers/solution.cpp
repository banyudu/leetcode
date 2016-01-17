/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include "../common.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		if (nullptr == l1 && nullptr == l2)
			return nullptr;
		int increment = 0;
		int value;
		ListNode *head = nullptr;
		ListNode *tail = nullptr;
		ListNode *data;
		do
		{
			value = increment;
			if (nullptr != l1)
			{
				value += l1->val;
				l1 = l1->next;
			}
			if (nullptr != l2)
			{
				value += l2->val;
				l2 = l2->next;
			}
			if (value >= 10)
			{
				value -= 10;
				increment = 1;
			}
			else
			{
				increment = 0;
			}
			data = new ListNode(value);
			if (head)
			{
				tail->next = data;
				tail = data;
			}
			else
			{
				head = tail = data;
			}
		} while (l1 || l2 || increment != 0);
		return head;
    }
};
