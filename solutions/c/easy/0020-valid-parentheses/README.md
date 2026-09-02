# 20. Valid Parentheses

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/valid-parentheses/](https://leetcode.com/problems/valid-parentheses/)

## Problem Statement

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

## Approach

Use a stack to track open brackets:
1. Iterate through each character in the string.
2. If an opening bracket (`(`, `{`, `[`) is encountered, push it onto the stack.
3. If a closing bracket (`)`, `}`, `]`) is encountered, pop the top element from the stack and verify that it matches the corresponding opening bracket.
4. If a mismatch occurs or the stack is empty when trying to pop, return `false`.
5. After scanning the entire string, return `true` if the stack is empty (`top == -1`), otherwise `false`.

## Complexity Analysis

- **Time Complexity:** O(n), where n is the length of the string `s`.
- **Space Complexity:** O(n) for the stack buffer.

## Example

```
Input: s = "()"
Output: true

Input: s = "()[]{}"
Output: true

Input: s = "(]"
Output: false

Input: s = "([])"
Output: true
```
