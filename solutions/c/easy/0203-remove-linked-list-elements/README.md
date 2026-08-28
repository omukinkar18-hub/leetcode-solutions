# 203. Remove Linked List Elements

- **Difficulty:** Easy
- **Link:** [LeetCode problem](https://leetcode.com/problems/remove-linked-list-elements/)

## Approach

First, advance `head` past any matching nodes at the beginning of the list. Then walk through the remaining list. When the next node matches `val`, bypass it; otherwise, move forward. Advancing only after a non-match correctly handles consecutive matching nodes.

## Complexity

- Time: `O(n)`
- Space: `O(1)`
