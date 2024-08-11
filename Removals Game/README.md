## Problem Statement

Alice and Bob are playing a game with two permutations of integers. Each player has a permutation of numbers from \(1\) to \(n\). The game involves the following steps:

1. **Alice** chooses either the first or the last element of her array and removes it.
2. **Bob** chooses either the first or the last element of his array and removes it.
3. The game continues for \(n-1\) turns, after which both arrays will have exactly one remaining element: \(x\) in Alice's array and \(y\) in Bob's array.

If \(x = y\), Bob wins; otherwise, Alice wins. Determine who will win if both players play optimally.

## Input

- The first line contains the number of test cases \( t \) \((1 \leq t \leq 10^4)\).
- For each test case:
  - The first line contains a single integer \( n \) \((1 \leq n \leq 3 \cdot 10^5)\).
  - The second line contains \( n \) integers \( a_1, a_2, \ldots, a_n \) — the permutation of Alice.
  - The third line contains \( n \) integers \( b_1, b_2, \ldots, b_n \) — the permutation of Bob.

It is guaranteed that the sum of all \( n \) does not exceed \( 3 \cdot 10^5 \).

## Output

For each test case, print a single line with the name of the winner. If Alice wins, print `"Alice"`; otherwise, print `"Bob"`.

## Example

**Input**

```
2
2
1 2
1 2
3
1 2 3
2 3 1
```

**Output**

```
Bob
Alice
```

## Solution Explanation

To determine the winner of the game:

1. **Understand the Optimal Strategy**: Both Alice and Bob will attempt to keep their options open for as long as possible, which means that the last remaining elements in their arrays will be chosen optimally.

2. **Use Index Mapping**: By mapping each number in Alice's and Bob's permutations to its index, you can determine if there is any common number in the final position of both permutations. This can be checked by comparing the indices of the numbers in both permutations.

3. **Determine the Winner**: If the final element in Alice's permutation can be found at the same position in Bob's permutation (considering the optimal strategy), Bob wins; otherwise, Alice wins.

## Implementation

Use the following approach to solve the problem:
- Parse the input to get the permutations for Alice and Bob.
- Use a set or mapping to keep track of the positions of each number.
- Determine the winner based on the final remaining elements.
