# 82. Remove Duplicates from Sorted List II

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)

## Problem Statement

Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

## Approach

1. Use a dummy node pointing to `head` to handle cases where the head itself needs to be removed.
2. Maintain a `prev` pointer initialized to the dummy node and a `temp` pointer initialized to `head`.
3. Iterate through the list with `temp`:
   - If `temp` has the same value as `temp->next`, detect all consecutive nodes with that duplicate value using a pointer `end`.
   - Skip all nodes with that duplicate value by updating `prev->next = end` and advancing `temp = end`.
   - If no duplicate is detected for the current node, advance `prev` to `temp` and `temp` to `temp->next`.
4. Return `dummy.next` as the new head of the list.

## Complexity Analysis

- **Time Complexity:** O(N), where N is the number of nodes in the linked list. Each node is visited at most a constant number of times.
- **Space Complexity:** O(1), as the modification is done in-place using pointers without extra memory allocation.

## Example

```
Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]

Input: head = [1,1,1,2,3]
Output: [2,3]
```
