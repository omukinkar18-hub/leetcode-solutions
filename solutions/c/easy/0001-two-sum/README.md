# 1. Two Sum

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/two-sum/](https://leetcode.com/problems/two-sum/)

## Problem Statement

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

## Approach

Use a nested loop to check every pair of elements `(nums[i], nums[j])`. When a pair is found such that `nums[i] + nums[j] == target`, store the indices in a dynamically allocated array and return it.

## Complexity Analysis

- **Time Complexity:** O(n²), where n is the number of elements in the array.
- **Space Complexity:** O(1) auxiliary space (excluding the returned array of size 2).

## Example

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Input: nums = [3,2,4], target = 6
Output: [1,2]

Input: nums = [3,3], target = 6
Output: [0,1]
```
