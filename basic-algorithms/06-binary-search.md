## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Binary search repeatedly checks the middle element of a sorted array. If the target is greater than the middle value, the left boundary is moved forward; otherwise, the right boundary is moved backward.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the input array to be sorted.
