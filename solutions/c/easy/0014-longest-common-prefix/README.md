# 14. Longest Common Prefix

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/longest-common-prefix/](https://leetcode.com/problems/longest-common-prefix/)

## Problem Statement

Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string `""`.

## Approach

Use the first string as the initial prefix. Iterate through all strings, comparing character by character with the current prefix. Truncate the prefix at the first mismatch. If the prefix becomes empty at any point, return early.

## Complexity Analysis

- **Time Complexity:** O(S), where S is the sum of all characters in all strings. In the worst case, all strings are identical and every character is compared.
- **Space Complexity:** O(m), where m is the length of the first string (for the prefix copy).

## Example

```
Input:  strs = ["flower", "flow", "flight"]
Output: "fl"

Input:  strs = ["dog", "racecar", "car"]
Output: ""
```
