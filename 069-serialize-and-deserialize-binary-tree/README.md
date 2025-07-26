# Challenge 069 - Serialize and Deserialize Binary Tree

## Problem Statement

Write a C++ program to **serialize** a binary tree into a string and **deserialize** the string back to the original binary tree.

## Requirements

- Implement a binary tree structure.
- Implement serialization to convert the tree into a string (e.g., preorder traversal with null markers).
- Implement deserialization to reconstruct the tree from the string.
- Demonstrate serialization and deserialization with sample input.

## Example

### Input (conceptual)
```
Construct tree:  
      1  
     / \  
    2   3  
       / \  
      4   5
```
### Output
```
Serialized tree: 1,2,null,null,3,4,null,null,5,null,null  
Deserialized tree recreated successfully.
```