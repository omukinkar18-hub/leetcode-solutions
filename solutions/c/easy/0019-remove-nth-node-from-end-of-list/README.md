# 19. Remove Nth Node From End of List

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/remove-nth-node-from-end-of-list/](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

## Problem Statement

Given the `head` of a linked list, remove the $n^{th}$ node from the end of the list and return its head.

## Approach

1. Handle edge cases where the list has only 1 node and $n = 1$.
2. Traverse the list in a first pass to count the total number of nodes.
3. In a second pass, traverse the list while decrementing the node count:
   - If the head node needs to be removed ($x = n - 1$), advance `head` to `head->next`.
   - If an internal or tail node needs to be removed ($x = n$), update `s->next = s->next->next`.
4. Return the modified `head`.

## Complexity Analysis

- **Time Complexity:** O(L), where L is the number of nodes in the linked list (two passes).
- **Space Complexity:** O(1) auxiliary space.

## Example

```
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Input: head = [1], n = 1
Output: []

Input: head = [1,2], n = 1
Output: [1]
```
