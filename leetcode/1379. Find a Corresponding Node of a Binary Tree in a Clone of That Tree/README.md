# 1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree
Given two binary trees original and cloned and given a reference to a node target in the original tree.

The cloned tree is a copy of the original tree.

Return a reference to the same node in the cloned tree.

Note that you are not allowed to change any of the two trees or the target node and the answer must be a reference to a node in the cloned tree.

## Example 1:
![e1](https://user-images.githubusercontent.com/101626995/185729043-0b20e515-8609-4071-8f00-ee33c1840415.png)
```
Input: tree = [7,4,3,null,null,6,19], target = 3
Output: 3
Explanation: In all examples the original and cloned trees are shown. The target node is a green node from the original tree. The answer is the yellow node from the cloned tree.
```

## Example 2:
![e2](https://user-images.githubusercontent.com/101626995/185729046-26e2e5e1-e6d8-47b6-8f50-c7cdcd4437c2.png)
```
Input: tree = [7], target =  7
Output: 7
```

## Example 3:
![e3](https://user-images.githubusercontent.com/101626995/185729047-dc3b66c5-a7d3-4beb-ad8e-70bdbfd7a54b.png)
```
Input: tree = [8,null,6,null,5,null,4,null,3,null,2,null,1], target = 4
Output: 4
```

## Constraints:
- The number of nodes in the tree is in the range [1, 104].
- The values of the nodes of the tree are unique.
- target node is a node from the original tree and is not null.