## Introduction

Knowledge of the binary number system and bit manipulation is less important in coding interviews, as most Software Engineers do not often work directly with bits. However, understanding these concepts can still be useful, especially for certain types of problems.

### Learning Resources

#### Readings
- [Bits, Bytes, Building With Binary, basecs](#)
- [Bitwise operation, Wikipedia](#)

#### Videos
- [Algorithms: Bit Manipulation, HackerRank](#)

### Practice

- Practice with bit operations.

### Corner Cases

- Be aware and check for overflow/underflow.
- Handle negative numbers appropriately.

### Techniques

Questions involving binary representations and bitwise operations are sometimes asked, so it's important to be familiar with basic operations like converting a number from decimal to binary and vice versa. Here are some helpful utility snippets:

#### Techniques:

| Technique                                 | Code                               |
|-------------------------------------------|------------------------------------|
| Test kth bit is set                       | `num & (1 << k) != 0`              |
| Set kth bit                               |  num |= (1 << k )                 |
| Turn off kth bit                          | `num &= ~(1 << k)`                 |
| Toggle the kth bit                        | `num ^= (1 << k)`                  |
| Multiply by 2^k                           | `num << k`                         |
| Divide by 2^k                             | `num >> k`                         |
| Check if a number is a power of 2         | `(num & (num - 1)) == 0` <br> or <br> `(num & (-num)) == num` |
| Swapping two variables                    | `num1 ^= num2; num2 ^= num1; num1 ^= num2` |

### Essential Questions

- Sum of Two Integers
- Number of 1 Bits

### Recommended Practice Questions

- Counting Bits
- Missing Number
- Reverse Bits
- Single Number

