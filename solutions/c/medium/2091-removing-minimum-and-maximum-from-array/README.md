# 2091. Removing Minimum and Maximum From Array

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/removing-minimum-and-maximum-from-array/](https://leetcode.com/problems/removing-minimum-and-maximum-from-array/)

## Problem Statement

You are given a 0-indexed array of distinct integers `nums`.

There is an element in `nums` that has the minimum value and an element in `nums` that has the maximum value. Both of them are different.

You want to remove both the minimum and maximum element from the array.

A deletion can be made from either the front or the back of the array.

Return the minimum number of deletions it would take to remove both the minimum and maximum element from the array.

## Approach

1. Find the indices of the minimum element (`mini`) and the maximum element (`maxi`).
2. Order the indices so that `left = min(mini, maxi)` and `right = max(mini, maxi)`.
3. Evaluate the cost of three possible removal strategies:
   - **Both from the front:** `costFront = right + 1`
   - **Both from the back:** `costBack = numsSize - left`
   - **From both ends:** `costBoth = (left + 1) + (numsSize - right)`
4. Return the minimum cost among the three strategies.

## Complexity Analysis

- **Time Complexity:** O(n), where n is the number of elements in `nums` (single pass to find min/max).
- **Space Complexity:** O(1) auxiliary space.

## Example

```
Input: nums = [2,10,7,5,4,1,8,6]
Output: 5
Explanation: 
The minimum element is nums[5] = 1.
The maximum element is nums[1] = 10.
Deleting 2 elements from the front and 3 elements from the back gives 5 deletions.

Input: nums = [0,-4,19,1,8,-2,-3,5]
Output: 3
Explanation: 
The minimum element is nums[1] = -4.
The maximum element is nums[2] = 19.
Deleting 3 elements from the front gives 3 deletions.

Input: nums = [101]
Output: 1
```
