# 3904. Smallest Stable Index II

**Difficulty:** Medium

**Link:** [https://leetcode.com/problems/smallest-stable-index-ii/](https://leetcode.com/problems/smallest-stable-index-ii/)

## Problem Statement

You are given an integer array `nums` of size `n` and an integer `k`.

For each index `i` ($0 \le i < n$), the instability score is defined as:
$$\text{instability score} = \max(\text{nums}[0 \dots i]) - \min(\text{nums}[i \dots n - 1])$$

An index `i` is considered **stable** if its instability score is less than or equal to `k`.

Return the **smallest** index `i` that is stable. If no such index exists, return `-1`.

## Approach

1. **Suffix Minimum Precomputation:** 
   - Precompute an array `min` of size `n`, where `min[i]` stores the minimum element in the suffix `nums[i \dots n - 1]`.
   - Traverse from right to left ($i = n - 2$ down to $0$) and set `min[i] = min(nums[i], min[i + 1])`.

2. **Prefix Maximum & Evaluation:**
   - Iterate from left to right ($i = 0$ to $n - 1$), maintaining the running maximum `maxi` of elements from `nums[0 \dots i]`.
   - At each index `i`, check if `maxi - min[i] <= k`.
   - Return the first index `i` that satisfies this condition.

3. **Fallback:** If no index satisfies the condition after traversing the array, return `-1`.

## Complexity Analysis

- **Time Complexity:** $O(n)$, where $n$ is the length of `nums`. We perform one reverse pass to precompute suffix minimums and one forward pass to find the first stable index.
- **Space Complexity:** $O(n)$ auxiliary space for the `min` suffix array.

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
