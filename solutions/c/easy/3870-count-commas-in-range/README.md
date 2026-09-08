# 3870. Count Commas in Range

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/count-commas-in-range/](https://leetcode.com/problems/count-commas-in-range/)

## Problem Statement

Given an integer `n`, return the total number of commas used when writing all integers from 1 to `n` (inclusive) in standard number formatting (where a comma is placed after every three digits from the right).

## Approach

1. Numbers strictly less than 1,000 (from 1 to 999) do not have any commas in standard formatting.
2. For $n \ge 1000$ (within problem constraints up to $10^5$), every number from 1,000 to $n$ contains exactly 1 comma.
3. Therefore, if $n < 1000$, return 0. Otherwise, the number of commas is $(n - 1000) + 1 = n - 999$.

## Complexity Analysis

- **Time Complexity:** $O(1)$
- **Space Complexity:** $O(1)$

## Example

```
Input: n = 1002
Output: 3
Explanation: The numbers "1,000", "1,001", and "1,002" each contain one comma, resulting in a total of 3 commas.

Input: n = 999
Output: 0
Explanation: No number in the range [1, 999] contains a comma.
```
