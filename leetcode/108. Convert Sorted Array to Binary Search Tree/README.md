# 108. Convert Sorted Array to Binary Search Tree
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

## Example 1:
![btree1](https://user-images.githubusercontent.com/101626995/190082724-1dab90cd-c885-44b0-ac7d-35304b367b25.jpg)
```
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:
```
![btree2](https://user-images.githubusercontent.com/101626995/190082733-9d45cabd-8f48-41dc-9c06-f6aeae2cd917.jpg)

## Example 2:
![btree](https://user-images.githubusercontent.com/101626995/190082747-c8efcb66-94a9-4130-8a4b-3297fa4bc80a.jpg)
```
Input: nums = [1,3]
Output: [3,1]
Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
```

## Constraints:
- 1 <= nums.length <= 104
- -104 <= nums[i] <= 104
- nums is sorted in a strictly increasing order.