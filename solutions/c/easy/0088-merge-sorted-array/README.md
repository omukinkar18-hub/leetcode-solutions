# 88. Merge Sorted Array

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/merge-sorted-array/](https://leetcode.com/problems/merge-sorted-array/)

## Problem Statement

You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2` respectively.

Merge `nums1` and `nums2` into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array `nums1`. To accommodate this, `nums1` has a length of `m + n`, where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to `0` and should be ignored. `nums2` has a length of `n`.

## Approach

1. Use three pointers starting from the end:
   - `p1 = m - 1`: points to the last initialized element in `nums1`.
   - `p2 = n - 1`: points to the last element in `nums2`.
   - `p = m + n - 1`: points to the last position in `nums1`.
2. Compare elements from `nums1[p1]` and `nums2[p2]`, placing the larger value at `nums1[p]` and decrementing the respective pointers.
3. If there are remaining elements in `nums2` after `p1 < 0`, copy them into `nums1`. Any remaining elements in `nums1` are already in their correct sorted positions.

## Complexity Analysis

- **Time Complexity:** $O(m + n)$ because each element in `nums1` and `nums2` is traversed at most once.
- **Space Complexity:** $O(1)$ auxiliary space as the merge is performed in-place.

## Example

```
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
```
