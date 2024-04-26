## Introduction

Math is a foundational aspect of Computer Science, and every programmer and computer scientist needs to have basic mathematical knowledge. While coding interviews typically involve minimal math, understanding basic math techniques can be helpful for implementing mathematical operations.

### Things to Look Out for During Interviews

- Check for division or modulo by 0 cases.
- Handle overflow/underflow, especially in typed languages like Java and C++.
- Consider negative numbers and floating-point numbers, as they may introduce edge cases.

### Corner Cases

- Division by 0
- Multiplication by 1
- Negative numbers
- Floats

### Common Formulas

| Formula                                 | Expression                                        |
|-----------------------------------------|---------------------------------------------------|
| Check if a number is even               | `num % 2 == 0`                                    |
| Sum of 1 to N                           | `1 + 2 + ... + (N - 1) + N = (N+1) * N/2`         |
| Sum of Geometric Progression            | `20 + 21 + 22 + 23 + ... 2n = 2n+1 - 1`           |
| Permutations of N                       | `N! / (N-K)!`                                     |
| Combinations of N                       | `N! / (K! * (N-K)!)`                              |

### Techniques

- **Multiples of a number:** Use the modulo operator to check if a number is a multiple of another.
- **Comparing floats:** Avoid rounding mistakes by using epsilon comparisons instead of equality checks.
- **Fast operators:** Implement operators like power, square root, or division efficiently, e.g., using fast exponentiation or binary search.

### Essential Questions

- Pow(x, n)
- Sqrt(x)

### Recommended Practice Questions

- Integer to English Words
