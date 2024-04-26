## Introduction

Tries are special trees (prefix trees) that make searching and storing strings more efficient. They have practical applications such as conducting searches and providing autocomplete.

### Learning Resources

#### Readings
- [Trying to Understand Tries, basecs](#)
- [Implement Trie (Prefix Tree), LeetCode](#)

### Time Complexity

- **m** is the length of the string used in the operation.

| Operation | Big-O |
|-----------|-------|
| Search    | O(m)  |
| Insert    | O(m)  |
| Remove    | O(m)  |

### Corner Cases

- Searching for a string in an empty trie
- Inserting empty strings into a trie

### Techniques

- Sometimes preprocessing a dictionary of words (given in a list) into a trie will improve the efficiency of searching for a word of length k among n words. Searching becomes O(k) instead of O(n).

### Essential Questions

- Implement Trie (Prefix Tree)

### Recommended Practice Questions

- Add and Search Word
- Word Break
- Word Search II