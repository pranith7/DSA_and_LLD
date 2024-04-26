## Introduction

A graph is a structure containing a set of objects (nodes or vertices) where there can be edges between these nodes/vertices. Edges can be directed or undirected and can optionally have values (a weighted graph). Trees are undirected graphs in which any two vertices are connected by exactly one edge and there can be no cycles in the graph.

Graphs are commonly used to model relationships between unordered entities, such as:

- Friendship between people: Each node is a person, and edges between nodes represent that these two people are friends.
- Distances between locations: Each node is a location, and the edge between nodes represents that these locations are connected. The value of the edge represents the distance.

### Learning Resources

#### Readings
- [From Theory To Practice: Representing Graphs, basecs](#)
- [Deep Dive Through A Graph: DFS Traversal, basecs](#)
- [Going Broad In A Graph: BFS Traversal, basecs](#)

#### Additional (only if you have time)
- [Finding The Shortest Path, With A Little Help From Dijkstra, basecs](#)
- [Spinning Around In Cycles With Directed Acyclic Graphs, basecs](#)

### Graph Representations

You can be given a list of edges and you have to build your graph from the edges so that you can perform a traversal on them. The common graph representations are:

- Adjacency matrix
- Adjacency list
- Hash table of hash tables

Using a hash table of hash tables would be the simplest approach during algorithm interviews. It will be rare that you have to use an adjacency matrix or list for graph questions during interviews.

### Time Complexity

| Algorithm         | Big-O         |
| ----------------- | ------------- |
| Depth-first search | O(|V| + |E|) |
| Breadth-first search | O(|V| + |E|) |
| Topological sort | O(|V| + |E|) |

### Things to Look Out for During Interviews

- A tree-like diagram could very well be a graph that allows for cycles and a naive recursive solution would not work. In that case, you will have to handle cycles and keep a set of visited nodes when traversing.
- Ensure you are correctly keeping track of visited nodes and not visiting each node more than once. Otherwise, your code could end up in an infinite loop.

### Corner Cases

- Empty graph
- Graph with one or two nodes
- Disconnected graphs
- Graph with cycles

## Graph Search Algorithms

### Depth-first Search (DFS)

Depth-first search is a graph traversal algorithm which explores as far as possible along each branch before backtracking. A stack is usually used to keep track of the nodes that are on the current search path.

### Breadth-first Search (BFS)

Breadth-first search is a graph traversal algorithm which starts at a node and explores all nodes at the present depth before moving on to the nodes at the next depth level. A queue is usually used to keep track of the nodes that were encountered but not yet explored.

### Topological Sorting

A topological sort or topological ordering of a directed graph is a linear ordering of its vertices such that for every directed edge uv from vertex u to vertex v, u comes before v in the ordering. Topological sorting is most commonly used for scheduling a sequence of jobs or tasks which has dependencies on other jobs/tasks.

### Depth-first Search (DFS) Template

```python
def dfs(matrix):
    # Check for an empty matrix/graph.
    if not matrix:
        return []

    rows, cols = len(matrix), len(matrix[0])
    visited = set()
    directions = ((0, 1), (0, -1), (1, 0), (-1, 0))

    def traverse(i, j):
        if (i, j) in visited:
            return

        visited.add((i, j))
        # Traverse neighbors.
        for direction in directions:
            next_i, next_j = i + direction[0], j + direction[1]
            if 0 <= next_i < rows and 0 <= next_j < cols:
                # Add in question-specific checks, where relevant.
                traverse(next_i, next_j)

    for i in range(rows):
        for j in range(cols):
            traverse(i, j)
```

### Breadth-first Search (BFS) Template

```python
from collections import deque

def bfs(matrix):
    # Check for an empty matrix/graph.
    if not matrix:
        return []

    rows, cols = len(matrix), len(matrix[0])
    visited = set()
    directions = ((0, 1), (0, -1), (1, 0), (-1, 0))

    def traverse(i, j):
        queue = deque([(i, j)])
        while queue:
            curr_i, curr_j = queue.popleft()
            if (curr_i, curr_j) not in visited:
                visited.add((curr_i, curr_j))
                # Traverse neighbors.
                for direction in directions:
                    next_i, next_j = curr_i + direction[0], curr_j + direction[1]
                    if 0 <= next_i < rows and 0 <= next_j < cols:
                        # Add in question-specific checks, where relevant.
                        queue.append((next_i, next_j))

    for i in range(rows):
        for j in range(cols):
            traverse(i, j)
```

## Essential Questions

- Number of Islands
- Flood Fill
- 01 Matrix

## Recommended Practice Questions

### Breadth-first Search
- Rotting Oranges
- Minimum Knight Moves (LeetCode Premium)

### Either Search
- Clone Graph
- Pacific Atlantic Water Flow
- Number of Connected Components in an Undirected Graph (LeetCode Premium)
- Graph Valid Tree (LeetCode Premium)

### Topological Sorting
- Course Schedule
- Alien Dictionary (LeetCode Premium)

---

This should make the content more readable in Markdown. Let me know if you need further adjustments!