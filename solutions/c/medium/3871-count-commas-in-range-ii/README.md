# 3871. Count Commas in Range II

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/count-commas-in-range-ii/](https://leetcode.com/problems/count-commas-in-range-ii/)

## Problem Statement

Given an integer `n`, return the total number of commas used when writing all integers from 1 to `n` (inclusive) in standard number formatting (where a comma is placed after every three digits from the right).

## Approach

1. In standard number formatting, a comma is added for every power of $1000$ ($10^3, 10^6, 10^9, 10^{12}, 10^{15}$).
2. Each integer $x \ge 10^3$ receives at least 1 comma (contributing $n - 10^3 + 1$ commas).
3. Each integer $x \ge 10^6$ receives an additional comma (contributing $n - 10^6 + 1$ commas).
4. Similarly, for $10^9, 10^{12}, 10^{15}$, we add $(n - 10^{3k} + 1)$ for every threshold $10^{3k} \le n$.
5. Summing these contributions gives the total count of commas in $O(1)$ time.

## Complexity Analysis

- **Time Complexity:** $O(1)$
- **Space Complexity:** $O(1)$

## Example

```
Input: n = 1002
Output: 3
Explanation: The numbers "1,000", "1,001", and "1,002" each contain one comma, resulting in a total of 3 commas.

Input: n = 1000000
Output: 999002
Explanation: Numbers from 1,000 to 999,999 have 1 comma each (999,000 commas). Number 1,000,000 has 2 commas. Total = 999,002.
```
