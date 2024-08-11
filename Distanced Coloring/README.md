
## Problem Statement

You received an \( n \times m \) grid from a mysterious source. The source also gave you a magic positive integer constant \( k \).

The source told you to color the grid with some colors, satisfying the following condition:

If \((x_1, y_1)\) and \((x_2, y_2)\) are two distinct cells with the same color, then \(\max(|x_1 - x_2|, |y_1 - y_2|) \geq k\).

You don't like using too many colors. Please find the minimum number of colors needed to color the grid.

### Input

Each test contains multiple test cases. The first line contains the number of test cases \( t \) \((1 \leq t \leq 1000)\). The description of the test cases follows.

Each line of each test case consists of three positive integers \( n \), \( m \), \( k \) \((1 \leq n, m, k \leq 10^4)\) — the dimensions of the grid and the magic constant.

### Output

For each test case, print a single integer — the minimum number of colors needed to color the grid.

### Example

**Input**

```
6
3 3 2
5 1 10000
7 3 4
3 2 7
8 9 6
2 5 4
```

**Output**

```
4
5
12
6
36
8
```

### Explanation

For each test case, the goal is to determine how many distinct colors are required to color the grid such that no two cells of the same color are within a distance \( k \) of each other. The output provides the minimum number of such colors needed for each test case.
