# 215. Kth Largest Element in an Array

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/kth-largest-element-in-an-array/](https://leetcode.com/problems/kth-largest-element-in-an-array/)

## Problem Statement

Given an integer array `nums` and an integer `k`, return the $k^{th}$ largest element in the array.

Note that it is the $k^{th}$ largest element in the sorted order, not the $k^{th}$ distinct element.

Can you solve it without sorting?

## Approach

1. Sort the array in ascending order using C's standard library `qsort` with a custom comparator function.
2. Access and return the $k^{th}$ largest element from the end of the sorted array at index `numsSize - k`.

## Complexity Analysis

- **Time Complexity:** O(n \log n), where n is the length of `nums`, due to the quicksort algorithm.
- **Space Complexity:** O(1) auxiliary space (or O(\log n) for the `qsort` recursion stack).

## Example

```
Input: nums = [3,2,1,5,6,4], k = 2
Output: 5

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
```
