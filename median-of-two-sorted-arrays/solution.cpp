#include "../common.h"

class Solution {
public:
    double findMedianSortedArrays(const vector<int>& nums1, const vector<int>& nums2) {
		int head, tail; 
		head = tail = 0;
		int h1, h2, t1, t2; // head and tail indexes
		h1 = h2 = 0;
		t1 = nums1.size() - 1;
		t2 = nums2.size() - 1;

		while (h1 <= t1 || h2 <= t2)
		{
			if (h1 > t1)
			{
				head = nums2[h2++];
				tail = nums2[t2--];
			}
			else if (h2 > t2)
			{
				head = nums1[h1++];
				tail = nums1[t1--];
			}
			else
			{
				if (nums1[h1] < nums2[h2])
					head = nums1[h1++];
				else
					head = nums2[h2++];
				if (nums1[t1] > nums2[t2])
					tail = nums1[t1--];
				else
					tail = nums2[t2--];
			}

			if (head == tail)
				return head;
		}
		return (head + tail) / 2.0;
    }
};
