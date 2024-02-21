# 73. Set Matrix Zeroes

Problem Link = "https://leetcode.com/problems/set-matrix-zeroes"

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.


 
# Example 1:

![image](https://github.com/Kaileshwaran13/Programming_Skills/assets/128310801/bcef9e44-1b51-4022-8e29-b5c37cb04396)



Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

# Example 2:

![image](https://github.com/Kaileshwaran13/Programming_Skills/assets/128310801/80bd4664-902f-4b32-a49c-09a44aa1aca8)


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

# Constraints:

- m == matrix.length
- n == matrix[0].length
- 1 <= m, n <= 200
- -2^31 <= matrix[i][j] <= 2^31 - 1
