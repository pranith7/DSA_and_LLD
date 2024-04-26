# DS Time Complexity

## Array

### Common Terms
- **Subarray**: A range of contiguous values within an array.
  - Example: given an array [2, 3, 6, 1, 5, 4], [3, 6, 1] is a subarray while [3, 1, 5] is not a subarray.
- **Subsequence**: A sequence derived by deleting some or no elements without changing the order of the remaining elements.
  - Example: given an array [2, 3, 6, 1, 5, 4], [3, 1, 5] is a subsequence but [3, 5, 1] is not a subsequence.

### Operations

| Operation            | Big-O      | Note                                      |
|----------------------|------------|-------------------------------------------|
| Access               | O(1)       |                                           |
| Search               | O(n)       |                                           |
| Search(sorted)       | O(log(n))  | Requires sorted data                      |
| Insert               | O(n)       | Requires shifting subsequent elements     |
| Insert(at the end)   | O(1)       | Special case: no shifting required        |
| Remove               | O(n)       | Requires shifting subsequent elements     |
| Remove(at the end)   | O(1)       | Special case: no shifting required        |

### Things to Consider
- Clarify presence of duplicate values in the array. Does it affect the answer?
- Avoid out-of-bounds errors when iterating through array elements.
- Slicing or concatenating arrays typically takes O(n) time. Use start and end indices for subarrays.

### Corner Cases
- Empty sequence
- Sequence with 1 or 2 elements
- Sequence with repeated elements
- Duplicated values in the sequence

### Essential Questions
These are essential questions to practice if you're studying for this topic.
- Two Sum
- Best Time to Buy and Sell Stock
- Product of Array Except Self
- Maximum Subarray

### Recommended Practice Questions
These are recommended questions to practice after you have studied for the topic and have practiced the essential questions.
- Contains Duplicate
- Maximum Product Subarray
- Search in Rotated Sorted Array
- 3Sum
- Container With Most Water
- Sliding Window Maximum

### Techniques
- **Sliding window**
  - Master the sliding window technique that applies to many subarray/substring problems. In a sliding window, the two pointers usually move in the same direction will never overtake each other. This ensures that each value is only visited at most twice and the time complexity is still O(n).
  - Examples: Longest Substring Without Repeating Characters, Minimum Size Subarray Sum, Minimum Window Substring

- **Two pointers**
  - Two pointers is a more general version of sliding window where the pointers can cross each other and can be on different arrays. 
  - Examples: Sort Colors, Palindromic Substrings
  - When you are given two arrays to process, it is common to have one index per array (pointer) to traverse/compare the both of them, incrementing one of the pointers when relevant. For example, we use this approach to merge two sorted arrays.
  - Examples: Merge Sorted Array

- **Traversing from the right**
  - Sometimes you can traverse the array starting from the right instead of the conventional approach of from the left.
  - Examples: Daily Temperatures, Number of Visible People in a Queue

- **Sorting the array**
  - Is the array sorted or partially sorted? If it is, some form of binary search should be possible. This also usually means that the interviewer is looking for a solution that is faster than O(n).
  - Can you sort the array? Sometimes sorting the array first may significantly simplify the problem. Obviously this would not work if the order of array elements need to be preserved.
  - Examples: Merge Intervals, Non-overlapping Intervals

- **Precomputation**
  - For questions where summation or multiplication of a subarray is involved, pre-computation using hashing or a prefix/suffix sum/product might be useful.
  - Examples: Product of Array Except Self, Minimum Size Subarray Sum, LeetCode questions tagged "prefix-sum"

- **Index as a hash key**
  - If you are given a sequence and the interviewer asks for O(1) space, it might be possible to use the array itself as a hash table.
  - Examples: First Missing Positive, Daily Temperatures

- **Traversing the array more than once**
  - This might be obvious, but traversing the array twice/thrice (as long as fewer than n times) is still O(n). Sometimes traversing the array more than once can help you solve the problem while keeping the time complexity to O(n).