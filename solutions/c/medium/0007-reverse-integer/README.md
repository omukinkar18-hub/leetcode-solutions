# 7. Reverse Integer

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/reverse-integer/](https://leetcode.com/problems/reverse-integer/)

## Problem Statement

Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range $[-2^{31}, 2^{31} - 1]$, then return `0`.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

## Approach

1. Initialize a 64-bit integer (`long long`) `rev = 0` to accumulate the reversed digits without overflowing intermediate calculations.
2. Continuously extract the last digit of `x` using `x % 10` and append it to `rev` via `rev = rev * 10 + x % 10`.
3. Truncate `x` by dividing it by 10 (`x = x / 10`).
4. Repeat until `x == 0`.
5. Check if the reversed integer `rev` exceeds 32-bit signed integer limits (`INT_MAX` or `INT_MIN`). If it overflows/underflows, return `0`; otherwise, return `(int)rev`.

## Complexity Analysis

- **Time Complexity:** O(\log_{10}|x|), since the number of digits in $x$ is proportional to $\log_{10}|x|$ (at most 10 iterations for a 32-bit integer).
- **Space Complexity:** O(1) auxiliary space.

## Example

```
Input: x = 123
Output: 321

Input: x = -123
Output: -321

Input: x = 120
Output: 21
```
