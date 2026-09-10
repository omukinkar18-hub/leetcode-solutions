# 171. Excel Sheet Column Number

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/excel-sheet-column-number/](https://leetcode.com/problems/excel-sheet-column-number/)

## Problem Statement

Given a string `columnTitle` that represents the column title as appears in an Excel sheet, return its corresponding column number.

For example:

```text
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
```

## Approach

1. Initialize `col` to 0 to store the result.
2. Determine the length of `columnTitle`.
3. Iterate through each character from left to right, converting each letter to its corresponding base-26 value (`columnTitle[j] - 'A' + 1`) and scaling it by the appropriate power of 26 ($26^{i-1}$).
4. Return the total column number.

## Complexity Analysis

- **Time Complexity:** $O(n)$, where $n$ is the length of `columnTitle`.
- **Space Complexity:** $O(1)$ auxiliary space.

## Example

```
Input: columnTitle = "A"
Output: 1

Input: columnTitle = "AB"
Output: 28

Input: columnTitle = "ZY"
Output: 701
```
