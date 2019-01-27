#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "../catch.hpp"
#include "solution.cpp"

Solution sln;

ListNode * createList(unsigned int value, bool reverse)
{
	ListNode *head;
	ListNode *tail;
	head = tail = new ListNode(value % 10);
	value /= 10;
	while (value > 0)
	{
		ListNode *node = new ListNode(value % 10);
		if (reverse)
		{
			tail->next = node;
			tail = node;
		}
		else
		{
			node->next = head;
			head = node;
		}
		value /= 10;
	}
	return head;
}

bool equalList(ListNode *l1, ListNode *l2)
{
	if (nullptr == l1 && nullptr == l2)
		return true;
	if (nullptr == l1 || nullptr == l2)
		return false;
	return l1->val == l2->val && equalList(l1->next, l2->next);
}

bool equalTest(int v1, int v2)
{
	ListNode *l1 = createList(v1, true);
	ListNode *l2 = createList(v2, true);
	ListNode *lsum = createList(v1 + v2, true);
	return equalList(sln.addTwoNumbers(l1, l2), lsum);
}

TEST_CASE("create List", "[createList]")
{
	ListNode *l1 = createList(139, true);
	REQUIRE(l1->val == 9);
	REQUIRE(l1->next->val == 3);
	REQUIRE(l1->next->next->val == 1);
	REQUIRE(l1->next->next->next == nullptr);

	ListNode *l2 = createList(493, false);
	REQUIRE(l2->val == 4);
	REQUIRE(l2->next->val == 9);
	REQUIRE(l2->next->next->val == 3);
	REQUIRE(l2->next->next->next == nullptr);
}

TEST_CASE("equal list", "[equalList]")
{
	REQUIRE(equalList(createList(123, true), createList(123, true)));
	REQUIRE(equalList(createList(123, true), createList(321, false)));
}

TEST_CASE("normal values", "[Solution]")
{
	REQUIRE(equalTest(123, 456));
	REQUIRE(equalTest(999, 456));
}

TEST_CASE("null ptrs", "[Solution]")
{
	REQUIRE(sln.addTwoNumbers(nullptr, nullptr) == nullptr);
}

TEST_CASE("zero values", "[Solution]")
{
	REQUIRE(equalTest(0, 0));
	REQUIRE(equalTest(0, 123));
	REQUIRE(equalTest(234, 0));
	REQUIRE(equalTest(23400000, 1));
}

TEST_CASE("big number", "[Solution]")
{
	REQUIRE(equalTest(1234567890, 12));
}
