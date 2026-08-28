# LeetCode Solutions

Clean, well-documented solutions to LeetCode problems, with explanations and complexity analysis.

## Repository structure

```text
solutions/
  <language>/
    <difficulty>/
      <problem-number>-<problem-slug>/
        solution.<ext>
        README.md
```

Each problem folder contains:

- A concise explanation of the approach
- Time and space complexity
- The solution source code
- A link to the original LeetCode problem

## Solved problems

| # | Problem | Difficulty | Language | Solution |
| -: | --- | :---: | :---: | --- |
| 203 | [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/) | Easy | C | [Solution](solutions/c/easy/0203-remove-linked-list-elements/) |

## Adding a solution

1. Create a folder using `solutions/<language>/<difficulty>/<number>-<slug>/`.
2. Add the source file and a `README.md` using the template below.
3. Add an entry to the solved-problems table.

### Problem README template

```md
# <Problem Number>. <Problem Title>

- **Difficulty:** Easy | Medium | Hard
- **Link:** <LeetCode problem URL>

## Approach

Briefly explain the key idea and why it works.

## Complexity

- Time: `O(...)`
- Space: `O(...)`
```

---

Solutions are written for learning and interview preparation.
