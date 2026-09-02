# 3718. Smallest Missing Multiple of K

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/smallest-missing-multiple-of-k/](https://leetcode.com/problems/smallest-missing-multiple-of-k/)

## Problem Statement

Given an array of integers `nums` and an integer `k`, return the smallest positive integer multiple of `k` that is not present in `nums`.

## Approach

1. Iterate through consecutive positive multiples of `k` starting from $1 \times k, 2 \times k, 3 \times k, \dots$.
2. For each multiple `mul = i * k`, search the array `nums` to check if it exists.
3. If the multiple is not found in `nums`, immediately return it as the smallest missing multiple.

## Complexity Analysis

- **Time Complexity:** O(M \cdot n), where n is the number of elements in `nums` and M is the number of multiples tested until finding the missing one.
- **Space Complexity:** O(1) auxiliary space.

## Example

```
Input: nums = [8,2,4,6], k = 2
Output: 10
Explanation: The positive multiples of 2 are 2, 4, 6, 8, 10, ... The smallest missing multiple in nums is 10.

Input: nums = [3,6,9], k = 3
Output: 12
Explanation: The positive multiples of 3 are 3, 6, 9, 12, ... The smallest missing multiple in nums is 12.
```
