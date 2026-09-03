# 3876. Construct Uniform Parity Array II

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/construct-uniform-parity-array-ii/](https://leetcode.com/problems/construct-uniform-parity-array-ii/)

## Problem Statement

You are given an array `nums1` of `n` distinct integers. You want to construct another array `nums2` of length `n` such that the elements in `nums2` are either all odd or all even.

For each index `i`, you must choose exactly one of the following operations:
- `nums2[i] = nums1[i]`
- `nums2[i] = nums1[i] - nums1[j]`, for an index `j != i`, such that `nums1[i] - nums1[j] >= 1`

Return `true` if it is possible to construct such an array, otherwise return `false`.

## Approach

1. If all elements in `nums1` are already even (or the array has length 1), all elements can remain even without modification, so return `true`.
2. To make all elements odd:
   - Any odd element is already odd.
   - Any even element can be made odd by subtracting an odd element (`even - odd = odd`).
   - For this subtraction to be valid, we need an odd element `odd` such that `even - odd >= 1`, which means `even > odd`.
   - The easiest odd element to subtract is the smallest odd number in `nums1`.
3. If for all even numbers `even`, `even - min_odd >= 1`, we can transform every even number to an odd number and return `true`. Otherwise, if there is any even number smaller than `min_odd`, it cannot be made odd or even consistently, so return `false`.

## Complexity Analysis

- **Time Complexity:** O(n), where n is the number of elements in `nums1` (linear scans of the array).
- **Space Complexity:** O(1) auxiliary space.

## Example

```
Input: nums1 = [1,4,7]
Output: true
Explanation: 
Set nums2[0] = nums1[0] = 1
Set nums2[1] = nums1[1] - nums1[0] = 4 - 1 = 3
Set nums2[2] = nums1[2] = 7
nums2 = [1, 3, 7], all elements are odd.

Input: nums1 = [2,3]
Output: false
Explanation: It is not possible to construct nums2 such that all elements have the same parity.

Input: nums1 = [4,6]
Output: true
Explanation: 
Set nums2[0] = nums1[0] = 4
Set nums2[1] = nums1[1] = 6
nums2 = [4, 6], all elements are even.
```
