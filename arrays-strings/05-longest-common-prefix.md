## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

The first string is used as the initial possible prefix. The prefix length is reduced until it matches the beginning of every other string.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If the strings do not share any common starting characters, the result is an empty string.
