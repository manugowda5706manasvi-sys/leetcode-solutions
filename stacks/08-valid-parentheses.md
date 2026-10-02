## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

A stack is used to store opening brackets. When a closing bracket is encountered, it is compared with the most recently stored opening bracket. The expression is valid only when all brackets are correctly matched.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

An expression with a closing bracket but no corresponding opening bracket is invalid.
