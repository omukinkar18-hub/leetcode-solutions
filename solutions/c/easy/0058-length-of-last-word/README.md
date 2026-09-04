# 58. Length of Last Word

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/length-of-last-word/](https://leetcode.com/problems/length-of-last-word/)

## Problem Statement

Given a string `s` consisting of words and spaces, return the length of the last word in the string.

A **word** is a maximal substring consisting of non-space characters only.

## Approach

1. Find the total length of the string `s`.
2. Traverse backward from the end to skip any trailing whitespace characters.
3. Count the non-space characters until encountering a space or the beginning of the string.
4. Return the counted length.

## Complexity Analysis

- **Time Complexity:** $O(n)$, where $n$ is the length of string `s` (single pass).
- **Space Complexity:** $O(1)$ auxiliary space.

## Example

```
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
```
