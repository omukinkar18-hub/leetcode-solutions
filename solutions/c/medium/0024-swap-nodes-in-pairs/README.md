# 24. Swap Nodes in Pairs

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/swap-nodes-in-pairs/](https://leetcode.com/problems/swap-nodes-in-pairs/)

## Problem Statement

Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

## Approach

1. Handle base cases: if the linked list is empty or contains only a single node, return `head` immediately.
2. Determine the length of the linked list by traversing it.
3. Iterate through the list pair-by-pair:
   - Identify the current pair of nodes (`first` and `second`).
   - Use a helper function `swap` to reverse their pointers and link them to the preceding part (`prev` node or update `head` if it's the first pair).
   - Move `prev` to `first` (which is now the second node of the swapped pair) and advance to the next pair using the saved pointer to the remainder of the list.
4. Return the updated `head`.

## Complexity Analysis

- **Time Complexity:** O(N), where N is the number of nodes in the linked list (one pass to calculate length, one pass to swap pairs).
- **Space Complexity:** O(1), as the nodes are swapped in-place without auxiliary data structures.

## Example

```
Input: head = [1,2,3,4]
Output: [2,1,4,3]

Input: head = []
Output: []

Input: head = [1]
Output: [1]

Input: head = [1,2,3]
Output: [2,1,3]
```
