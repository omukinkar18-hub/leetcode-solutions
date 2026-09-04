# 3903. Smallest Stable Index I

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/smallest-stable-index-i/](https://leetcode.com/problems/smallest-stable-index-i/)

## Problem Statement

You are given an integer array `nums` of size `n` and an integer `k`.

For each index `i` ($0 \le i < n$), the instability score is defined as:
$$\text{instability score} = \max(\text{nums}[0 \dots i]) - \min(\text{nums}[i \dots n - 1])$$

An index `i` is considered **stable** if its instability score is less than or equal to `k`.

Return the **smallest** index `i` that is stable. If no such index exists, return `-1`.

## Approach

1. Compute the prefix maximum for each index `i` (maximum element in `nums[0..i]`).
2. Compute the suffix minimum for each index `i` (minimum element in `nums[i..n-1]`).
3. Iterate from left to right ($i = 0$ to $n-1$), and check if $\text{max}[i] - \text{min}[i] \le k$.
4. Return the first index $i$ satisfying the condition. If none is found, return `-1`.

## Complexity Analysis

- **Time Complexity:** $O(n^2)$, where $n$ is the number of elements in `nums`, scanning prefixes and suffixes for each index.
- **Space Complexity:** $O(n)$ for auxiliary `max` and `min` arrays.

## Example

```
Input: nums = [5, 0, 1, 4], k = 3
Output: 3
Explanation:
- Index 0: max([5]) - min([5, 0, 1, 4]) = 5 - 0 = 5 (> 3)
- Index 1: max([5, 0]) - min([0, 1, 4]) = 5 - 0 = 5 (> 3)
- Index 2: max([5, 0, 1]) - min([1, 4]) = 5 - 1 = 4 (> 3)
- Index 3: max([5, 0, 1, 4]) - min([4]) = 5 - 4 = 1 (<= 3)
The smallest stable index is 3.
```
