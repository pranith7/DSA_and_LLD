# String

## Introduction
A string is a sequence of characters. Many tips that apply to arrays also apply to strings.

### Common Data Structures
- Trie/Prefix Tree
- Suffix Tree

### Common String Algorithms
- Rabin Karp for efficient substring searching using a rolling hash
- KMP for efficient substring searching

### Operations
| Operation               | Big-O    | Note                                          |
|-------------------------|----------|-----------------------------------------------|
| Access                  | O(1)     |                                               |
| Search                  | O(n)     |                                               |
| Insert                  | O(n)     |                                               |
| Remove                  | O(n)     |                                               |

#### Operations Involving Another String of Length m
| Operation               | Big-O    | Note                                          |
|-------------------------|----------|-----------------------------------------------|
| Find substring          | O(n.m)   | Naive case; more efficient algorithms exist, like KMP |
| Concatenating strings   | O(n + m) |                                               |
| Slice                   | O(m)     |                                               |
| Split (by token)        | O(n + m) |                                               |
| Strip (remove leading and trailing whitespaces) | O(n) |                                          |

### Things to Look Out For During Interviews
- Ask about input character set and case sensitivity. Usually, the characters are limited to lowercase Latin characters, for example, a to z.

### Corner Cases
- Empty string
- String with 1 or 2 characters
- String with repeated characters
- Strings with only distinct characters

### Essential Questions
These are essential questions to practice if you're studying for this topic.
- Valid Anagram
- Valid Palindrome
- Longest Substring Without Repeating Characters

### Recommended Practice Questions
These are recommended questions to practice after you have studied for the topic and have practiced the essential questions.
- Longest Repeating Character Replacement
- Find All Anagrams in a String
- Minimum Window Substring
- Group Anagrams
- Longest Palindromic Substring
- Encode and Decode Strings (LeetCode Premium)

### Techniques
- **Counting Characters**
  - Often you will need to count the frequency of characters in a string. The most common way of doing that is by using a hash table/map in your language of choice. If your language has a built-in Counter class like Python, ask if you can use that instead.
  - If you need to keep a counter of characters, a common mistake is to say that the space complexity required for the counter is O(n). The space required for a counter of a string of latin characters is O(1) not O(n). This is because the upper bound is the range of characters, which is usually a fixed constant of 26. The input set is just lowercase Latin characters.

- **String of Unique Characters**
  - A neat trick to count the characters in a string of unique characters is to use a 26-bit bitmask to indicate which lowercase Latin characters are inside the string.
  ```python
  mask = 0
  for c in word:
      mask |= (1 << (ord(c) - ord('a')))
  ```
    - To determine if two strings have common characters, perform & on the two bitmasks. If the result is non-zero, i.e., mask_a & mask_b > 0, then the two strings have common characters.
    
- **Anagram**
    - An anagram is word switch or word play. It is the result of rearranging the letters of a word or phrase to produce a new word or phrase, while using all the original letters only once. In interviews, usually, we are only bothered with words without spaces in them.

    - To determine if two strings are anagrams, there are a few approaches:

        1. Sorting both strings should produce the same resulting string. This takes O(n.log(n)) time and O(log(n)) space.
        2. If we map each character to a prime number and we multiply each mapped number together, anagrams should have the same multiple (prime factor decomposition). This takes O(n) time and O(1) space. Examples: Group Anagram
        3. Frequency counting of characters will help to determine if two strings are anagrams. This also takes O(n) time and O(1) space.

- **Palindrome**
    - A palindrome is a word, phrase, number, or other sequence of characters which reads the same backward as forward, such as madam or racecar.

    - Here are ways to determine if a string is a palindrome:
        1. Reverse the string and it should be equal to itself.
        2. Have two pointers at the start and end of the string. Move the pointers inward till they meet. At every point in time, the characters at both pointers should match.
        The order of characters within the string matters, so hash tables are usually not helpful.
