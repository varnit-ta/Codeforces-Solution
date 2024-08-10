### Problem Statement

A girl is preparing for her birthday and wants to buy the most beautiful bouquet. There are a total of \( n \) flowers in the store, each of which is characterized by the number of petals, and a flower with \( k \) petals costs \( k \) coins. The girl has decided that the difference in the number of petals between any two flowers she will use in her bouquet should not exceed one. At the same time, the girl wants to assemble a bouquet with the maximum possible number of petals. Unfortunately, she only has \( m \) coins, and she cannot spend more. What is the maximum total number of petals she can assemble in the bouquet?

#### Input
- Each test consists of several test cases. The first line contains a single integer \( t \) (\( 1 \leq t \leq 10000 \)) — the number of test cases. This is followed by descriptions of the test cases.
- The first line of each test case contains two integers \( n \), \( m \) (\( 1 \leq n \leq 2 \times 10^5 \), \( 1 \leq m \leq 10^{18} \)) — the number of flowers in the store and the number of coins the girl possesses, respectively.
- The second line of each test case contains \( n \) integers \( a_1, a_2, \dots, a_n \) (\( 1 \leq a_i \leq 10^9 \)), where \( a_i \) is the number of petals of the \( i \)-th flower in the store.
- The sum of \( n \) over all test cases does not exceed \( 2 \times 10^5 \).

#### Output
For each test case, output a single integer — the maximum possible number of petals in the bouquet that the girl can assemble while meeting all the conditions listed above.

#### Example

**Input:**

```
5
5 10
1 1 2 2 3
8 20
4 2 7 5 6 1 1 1
8 100000
239 30 610 122 24 40 8 2
11 13
2 4 11 1 1 2 3 5 4 3 2
8 1033
206 206 206 207 207 207 207 1000
```

**Output:**

```
7
13
610
13
1033
```