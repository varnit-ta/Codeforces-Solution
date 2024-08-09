## Problem Description

On the board, Ivy wrote down all integers from `l` to `r`, inclusive.

In an operation, she does the following:

1. Pick two numbers `x` and `y` on the board.
2. Erase them, and in their place write the numbers `3x` and `⌊y/3⌋` (Here `⌊∙⌋` denotes rounding down to the nearest integer).

What is the minimum number of operations Ivy needs to make all numbers on the board equal to `0`? We have a proof that this is always possible.

### Input

- The first line contains an integer `t` `(1 ≤ t ≤ 10^4)` — the number of test cases.
- Each of the next `t` lines contains two integers `l` and `r` `(1 ≤ l < r ≤ 2⋅10^5)`.

### Output

For each test case, output a single integer — the minimum number of operations needed to make all numbers on the board equal to `0`.

### Example

#### Input
```
4
1 3
2 4
199999 200000
19 84
```

#### Output
```
5
6
36
263
```

### Note

In the first test case, we can perform 5 operations as follows:

```
1,2,3 → −−−−x=1,y=2
3,0,3 → −−−−x=0,y=3
1,0,3 → −−−−x=0,y=3
1,0,1 → −−−−x=0,y=1
0,0,1 → −−−−x=0,y=1
0,0,0
```
