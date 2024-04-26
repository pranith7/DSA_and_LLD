
## Introduction

A heap is a specialized tree-based data structure that is a complete tree and satisfies the heap property.

- **Max heap:** In a max heap, the value of a node must be the greatest among the node values in its entire subtree. The same property must be recursively true for all nodes in the tree.
- **Min heap:** In a min heap, the value of a node must be the smallest among the node values in its entire subtree. The same property must be recursively true for all nodes in the tree.

In the context of algorithm interviews, heaps and priority queues can be treated as the same data structure. A heap is useful when it's necessary to repeatedly remove the object with the highest (or lowest) priority, or when insertions need to be interspersed with removals of the root node.

### Learning Resources

#### Readings
- [Learning to Love Heaps, basecs](#)
- [Heapify All The Things With Heap Sort, basecs](#)
- [Heaps, James Aspnes, Yale University](#)

### Implementations

| Language | API                |
|----------|--------------------|
| C++      | `std::priority_queue` |
| Java     | `java.util.PriorityQueue` |
| Python   | `heapq`            |
| JavaScript | N/A                |

### Time Complexity

| Operation             | Big-O  |
|-----------------------|--------|
| Find max/min          | O(1)   |
| Insert                | O(log(n)) |
| Remove                | O(log(n)) |
| Heapify               | O(n)   |

### Techniques

- **Mention of k:** If you see a top or lowest k being mentioned in the question, it is usually a signal that a heap can be used to solve the problem, such as in Top K Frequent Elements.

### Essential Questions

- Merge K Sorted Lists
- K Closest Points to Origin

### Recommended Practice Questions

- Top K Frequent Elements
- Find Median from Data Stream

