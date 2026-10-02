## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

The solution keeps track of the lowest price seen so far. For every later price, it calculates the possible profit and keeps the maximum profit found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If prices continuously decrease, no profitable transaction is possible, so the answer is 0.
