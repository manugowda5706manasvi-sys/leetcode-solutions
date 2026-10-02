## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

The solution maintains a position for the next non-zero value. Whenever a non-zero value is found, it is moved to that position while preserving the relative order of the non-zero elements.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution keeps all zeroes at the end while maintaining the original order of the non-zero elements.
