# 75. Sort Colors

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/sort-colors/](https://leetcode.com/problems/sort-colors/)

## Problem Statement

Given an array `nums` with `n` objects colored red, white, or blue, sort them **in-place** so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers `0`, `1`, and `2` to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

## Approach

1. Use **Insertion Sort** to sort the array in-place.
2. Iterate through the array starting from index `1` to `numsSize - 1`.
3. For each element `temp = arr[i]`, compare it with elements in the sorted portion of the array to the left (`arr[0...i-1]`).
4. Shift all elements greater than `temp` one position to the right.
5. Place `temp` into its correct sorted position `arr[j+1]`.

## Complexity Analysis

- **Time Complexity:** $O(n^2)$ in the average and worst case, where $n$ is the number of elements in `nums`.
- **Space Complexity:** $O(1)$ auxiliary space (in-place sort).

## Example

```
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Input: nums = [2,0,1]
Output: [0,1,2]
```
