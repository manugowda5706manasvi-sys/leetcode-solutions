## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

The solution checks every possible pair of numbers in the array. For each pair, it checks whether their sum is equal to the target value. When a matching pair is found, their indices are displayed.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution should also work when the two numbers have the same value but occur at different positions. For example, `[3,3]` with target `6` should return indices `0` and `1`.
