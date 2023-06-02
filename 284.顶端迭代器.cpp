/*
 * @lc app=leetcode.cn id=284 lang=cpp
 *
 * [284] 顶端迭代器
 */

#include <bits/stdc++.h>

class Iterator
{
	struct Data;
	Data *data;

public:
	Iterator(const std::vector<int> &nums);
	Iterator(const Iterator &iter);

	// Returns the next element in the iteration.
	int next();

	// Returns true if the iteration has more elements.
	bool hasNext() const;
};

// @lc code=start
/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *

 */

class PeekingIterator : public Iterator
{
public:
	PeekingIterator(const std::vector<int> &nums) : Iterator(nums)
	{
		has_next = Iterator::hasNext();
		if(has_next)
			next_element = Iterator::next();
	}

	// Returns the next element in the iteration without advancing the iterator.
	int peek()
	{
		return next_element;
	}

	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next()
	{
		int ret = next_element;
		has_next = Iterator::hasNext();
		if(has_next)
			next_element = Iterator::next();
		return ret;
	}

	bool hasNext() const
	{
		return has_next;
	}

private:
	int next_element;
	bool has_next;
};
// @lc code=end
