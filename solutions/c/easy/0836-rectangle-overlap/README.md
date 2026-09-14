# 836. Rectangle Overlap

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/rectangle-overlap/](https://leetcode.com/problems/rectangle-overlap/)

## Problem Statement

An axis-aligned rectangle is represented as a list `[x1, y1, x2, y2]`, where `(x1, y1)` is the coordinate of its bottom-left corner, and `(x2, y2)` is the coordinate of its top-right corner. Its top and bottom edges are parallel to the X-axis, and its left and right edges are parallel to the Y-axis.

Two rectangles overlap if the area of their intersection is positive. To be clear, two rectangles that only touch at the corner or edges do not overlap.

Given two axis-aligned rectangles `rec1` and `rec2`, return `true` if they overlap, otherwise return `false`.

## Approach

Two rectangles do not overlap if one is completely situated to the left, right, above, or below the other:
- `rec1` is to the left of `rec2`: `rec1[2] <= rec2[0]`
- `rec2` is to the left of `rec1`: `rec2[2] <= rec1[0]`
- `rec1` is below `rec2`: `rec1[3] <= rec2[1]`
- `rec2` is below `rec1`: `rec2[3] <= rec1[1]`

If any of these non-overlapping conditions are met, the function returns `false`. Otherwise, the rectangles overlap and have a positive intersection area, returning `true`.

## Complexity Analysis

- **Time Complexity:** $O(1)$ as it involves constant-time comparisons.
- **Space Complexity:** $O(1)$ auxiliary space.

## Example

```
Input: rec1 = [0,0,2,2], rec2 = [1,1,3,3]
Output: true

Input: rec1 = [0,0,1,1], rec2 = [1,0,2,1]
Output: false

Input: rec1 = [0,0,1,1], rec2 = [2,2,3,3]
Output: false
```
