## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

A frequency array of size 26 is used to count the occurrences of each lowercase letter in the first string. The counts are then decreased using the second string. If all counts become zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Two strings can be anagrams even when their characters appear in different orders. For example, "anagram" and "nagaram" contain the same characters.
