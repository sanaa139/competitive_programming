# 221. Maximal Square
Given an m x n binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

## Example 1:
![max1grid](https://user-images.githubusercontent.com/101626995/181908650-12637e48-5708-41e7-97e5-9258b49624a8.jpg)
```
Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 4
```

## Example 2:
![max2grid](https://user-images.githubusercontent.com/101626995/181908626-677ecd5c-156d-444f-8d23-46ddb2a9243f.jpg)
```
Input: matrix = [["0","1"],["1","0"]]
Output: 1
```

## Example 3:
```
Input: matrix = [["0"]]
Output: 0
```

## Constraints:
- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 300
- matrix[i][j] is '0' or '1'.