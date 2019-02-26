#ifndef _COMMON_H_
#define _COMMON_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <string>
#include <cmath>
#include <limits.h>
#include <stack>
#include <utility>

using std::vector;
using std::list;
using std::queue;
using std::set;
using std::map;
using std::unordered_map;
using std::unordered_set;
using std::deque;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::round;
using std::lround;
using std::llround;
using std::fabs;
using std::abs;
using std::stoi;
using std::min;
using std::max;
using std::stack;
using std::pair;
using std::to_string;
using std::find;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

#endif