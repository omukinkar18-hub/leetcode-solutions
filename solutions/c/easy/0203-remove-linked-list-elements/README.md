# 203. Remove Linked List Elements

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/remove-linked-list-elements/](https://leetcode.com/problems/remove-linked-list-elements/)

## Problem Statement

Given the `head` of a linked list and an integer `val`, remove all the nodes of the linked list that have `Node.val == val`, and return the new head.

## Approach

1. Remove matching nodes from the start of the list by advancing `head = head->next` as long as `head != NULL` and `head->val == val`.
2. If `head` becomes `NULL`, return `NULL`.
3. Use a pointer `current` initialized to `head` to traverse the rest of the list.
4. If `current->next->val == val`, bypass the node: `current->next = current->next->next`.
5. Otherwise, advance `current = current->next`.
6. Return `head`.

## Complexity Analysis

- **Time Complexity:** O(n), where n is the number of nodes in the linked list.
- **Space Complexity:** O(1) auxiliary space.

## Example

```
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]

Input: head = [], val = 1
Output: []

Input: head = [7,7,7,7], val = 7
Output: []
```
