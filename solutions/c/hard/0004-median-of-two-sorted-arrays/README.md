# 4. Median of Two Sorted Arrays

**Difficulty:** Hard

**Link:** [https://leetcode.com/problems/median-of-two-sorted-arrays/](https://leetcode.com/problems/median-of-two-sorted-arrays/)

## Problem Statement

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return the median of the two sorted arrays.

The overall run time complexity should be $O(\log(m+n))$, but this solution uses a two-pointer merge approach.

## Approach

1. Merge both sorted arrays `nums1` and `nums2` into a combined array `arr` of size `m + n` using the two-pointer merge technique.
2. If the total length is odd, the median is the middle element `arr[(m+n)/2]`.
3. If the total length is even, the median is the average of the two middle elements `(arr[(m+n)/2] + arr[(m+n)/2 - 1]) / 2.0`.

## Complexity Analysis

- **Time Complexity:** O(m + n), where m and n are the lengths of `nums1` and `nums2`.
- **Space Complexity:** O(m + n) for the merged array `arr`.

## Example

```
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
```
