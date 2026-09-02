# 23. Merge k Sorted Lists

**Difficulty:** Hard

**Link:** [https://leetcode.com/problems/merge-k-sorted-lists/](https://leetcode.com/problems/merge-k-sorted-lists/)

## Problem Statement

You are given an array of `k` linked-lists `lists`, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

## Approach

1. Iterate through all linked lists in the `lists` array.
2. Collect and copy all nodes into a single linked list.
3. Sort the newly constructed linked list in ascending order using bubble sort (pairwise comparison and swapping node values).
4. Return the head of the sorted linked list.

## Complexity Analysis

- **Time Complexity:** O(N^2), where N is the total number of nodes across all k linked lists (due to bubble sort on the merged list).
- **Space Complexity:** O(N) for allocating new nodes for the merged list.

## Example

```
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6
```
