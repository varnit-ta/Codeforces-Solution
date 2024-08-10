## Problem Statement

You are given three integers \( x_c \), \( y_c \), and \( k \) \((-100 \leq x_c, y_c \leq 100, \, 1 \leq k \leq 1000)\).

You need to find \( k \) distinct points \((x_1, y_1), (x_2, y_2), \ldots, (x_k, y_k)\), having integer coordinates, on the 2D coordinate plane such that:

- Their center is \((x_c, y_c)\).
- \(-10^9 \leq x_i, y_i \leq 10^9\) for all \( i \) from \( 1 \) to \( k \).

**The center** of \( k \) points \((x_1, y_1), (x_2, y_2), \ldots, (x_k, y_k)\) is:

\[
\left( \frac{x_1 + x_2 + \cdots + x_k}{k}, \frac{y_1 + y_2 + \cdots + y_k}{k} \right)
\]

It can be proven that at least one set of \( k \) distinct points always exists that satisfies these conditions.

### Input

The first line contains \( t \) \((1 \leq t \leq 100)\) — the number of test cases.

Each test case contains three integers \( x_c \), \( y_c \), and \( k \) \((-100 \leq x_c, y_c \leq 100, \, 1 \leq k \leq 1000)\) — the coordinates of the center and the number of distinct points you must output.

It is guaranteed that the sum of \( k \) over all test cases does not exceed 1000.

### Output

For each test case, output \( k \) lines, the \( i \)-th line containing two space-separated integers \( x_i \) and \( y_i \) \((-10^9 \leq x_i, y_i \leq 10^9)\) — denoting the position of the \( i \)-th point.

If there are multiple answers, print any of them. It can be shown that a solution always exists under the given constraints.

### Example

**Input**

```
4
10 10 1
0 0 3
-5 -8 8
4 -5 3
```

**Output**

```
10 10
-1 -1
5 -1
-4 2
-6 -7
-5 -7
-4 -7
-4 -8
-4 -9
-5 -9
-6 -9
-6 -8
1000 -1000
-996 995
8 -10
```

**Note**

For the first test case, (10/1, 10/1) = (10, 10)

For the second test case, ((-1 + 5 -4)/3, (-1-1+2)/3) = (0,0)