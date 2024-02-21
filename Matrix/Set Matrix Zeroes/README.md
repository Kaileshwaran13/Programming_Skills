# 73. Set Matrix Zeroes

Problem Link = "https://leetcode.com/problems/set-matrix-zeroes"

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.


 
# Example 1:

![image](https://github.com/Kaileshwaran13/Programming_Skills/assets/128310801/c29a0bb7-99fb-4c17-991e-1ccc460f304a)


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

# Example 2:

![image](https://github.com/Kaileshwaran13/Programming_Skills/assets/128310801/f278f66a-1732-439e-b82f-5f1c19584536)

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

# Constraints:

- m == matrix.length
- n == matrix[0].length
- 1 <= m, n <= 200
- -2^31 <= matrix[i][j] <= 2^31 - 1
