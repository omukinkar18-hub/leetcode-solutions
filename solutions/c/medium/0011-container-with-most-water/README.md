# 11. Container With Most Water

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/container-with-most-water/](https://leetcode.com/problems/container-with-most-water/)

## Problem Statement

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the $i^{th}$ line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

## Approach

Use the two-pointer technique:
1. Place two pointers at the ends of the array (`i = 0` and `j = heightSize - 1`).
2. Calculate the area formed by the two lines: `area = min(height[i], height[j]) * (j - i)`.
3. Track the maximum area seen so far.
4. Move the pointer pointing to the shorter line inward, as moving the taller line can never yield a larger area.
5. Repeat until the two pointers meet.

## Complexity Analysis

- **Time Complexity:** O(n), where n is the number of elements in `height`.
- **Space Complexity:** O(1) auxiliary space.

## Example

```
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water the container can contain is 49.

Input: height = [1,1]
Output: 1
```
