# Challenge 058 - Find Duplicate Subtrees

## Problem Statement

Given the root of a binary tree, write a C++ program to find all **duplicate subtrees**.

Two subtrees are duplicate if they have the same structure and node values.

## Requirements

- Implement a binary tree structure.
- Traverse the tree to find duplicate subtrees.
- Return the roots of all duplicate subtrees.
- Use efficient hashing or serialization of subtrees.

## Example

### Input (conceptual)
```
Construct tree:  
       1  
      / \  
     2   3  
    /   / \  
   4   2   4  
      /  
     4  
```
### Output
```
Duplicate subtrees roots values: 2, 4
```