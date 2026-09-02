# 2. Add Two Numbers

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/add-two-numbers/](https://leetcode.com/problems/add-two-numbers/)

## Problem Statement

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

## Approach

Simulate elementary addition column-by-column:
1. Initialize a dummy head node and a `carry` variable set to 0.
2. Traverse both linked lists simultaneously while at least one node or a non-zero carry remains.
3. Compute the sum of the current digits plus `carry`. Update `carry = sum / 10` and create a new node with value `sum % 10`.
4. Return `dummy.next` as the head of the resultant list.

## Complexity Analysis

- **Time Complexity:** O(\max(N, M)), where N and M are the lengths of `l1` and `l2`.
- **Space Complexity:** O(\max(N, M)) to store the newly created linked list representing the sum.

## Example

```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Input: l1 = [0], l2 = [0]
Output: [0]

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
```
