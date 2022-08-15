# 2236. Root Equals Sum of Children
You are given the root of a binary tree that consists of exactly 3 nodes: the root, its left child, and its right child.

Return true if the value of the root is equal to the sum of the values of its two children, or false otherwise.

## Example 1:
![graph3drawio](https://user-images.githubusercontent.com/101626995/184603399-f2b1bcce-c724-4e51-acdd-e6a70f12d886.png)
```
Input: root = [10,4,6]
Output: true
Explanation: The values of the root, its left child, and its right child are 10, 4, and 6, respectively.
10 is equal to 4 + 6, so we return true.
```

## Example 2:
![graph3drawio-1](https://user-images.githubusercontent.com/101626995/184603383-7c798093-ef4c-4ff5-a290-bc755a9cb62b.png)
```
Input: root = [5,3,1]
Output: false
Explanation: The values of the root, its left child, and its right child are 5, 3, and 1, respectively.
5 is not equal to 3 + 1, so we return false.
```

## Constraints:
- The tree consists only of the root, its left child, and its right child.
- -100 <= Node.val <= 100