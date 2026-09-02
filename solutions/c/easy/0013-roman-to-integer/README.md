# 13. Roman to Integer

**Difficulty:** Easy

**Link:** [https://leetcode.com/problems/roman-to-integer/](https://leetcode.com/problems/roman-to-integer/)

## Problem Statement

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`.

Given a roman numeral, convert it to an integer.

## Approach

1. Traverse the Roman numeral string from right to left.
2. Convert each Roman character to its integer value using a helper function.
3. Compare the current character value with the preceding character value (to its left):
   - If the current character is greater than the preceding character, subtract the preceding character's value (subtractive notation like IV, IX, XL, XC, CD, CM) and skip it.
   - Otherwise, add the value to the running total.
4. Return the accumulated integer value.

## Complexity Analysis

- **Time Complexity:** O(n), where n is the length of the string `s`.
- **Space Complexity:** O(1) auxiliary space.

## Example

```
Input: s = "III"
Output: 3
Explanation: III = 3.

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V = 5, III = 3.

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
```
