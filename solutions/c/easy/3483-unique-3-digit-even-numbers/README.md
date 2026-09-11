# 3483. Unique 3-Digit Even Numbers

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/unique-3-digit-even-numbers/](https://leetcode.com/problems/unique-3-digit-even-numbers/)

## Problem Statement

You are given an integer array `digits`, where each element is a digit. The array may contain duplicates.

You need to find the number of **distinct** three-digit even integers that can be formed using the given digits.

Notice that:
- The integers should not have leading zeros.
- Each copy of a digit in `digits` can be used at most once per integer.
- The integer must be even.

## Approach

1. Count the frequency of each digit (0–9) available in the input array `digits`.
2. Iterate through all possible 3-digit even numbers from 100 to 998 with a step of 2 (`num += 2`).
3. For each candidate number:
   - Extract its three individual digits: $d_1$, $d_2$, and $d_3$.
   - Count the frequency of required digits.
   - Check if the input frequency map has enough counts for each required digit.
   - If valid, increment the answer counter.
4. Return the total count.

## Complexity Analysis

- **Time Complexity:** $O(n)$, where $n$ is the length of `digits` to build the frequency map. The search loop runs a constant 450 times ($O(1)$). Overall time complexity is $O(n)$.
- **Space Complexity:** $O(1)$ auxiliary space as the frequency arrays are of fixed size 10.

## Example

```
Input: digits = [1, 2, 3, 4]
Output: 12
Explanation: The 12 distinct 3-digit even numbers that can be formed are:
124, 132, 134, 142, 214, 234, 312, 314, 324, 342, 412, and 432.
```
