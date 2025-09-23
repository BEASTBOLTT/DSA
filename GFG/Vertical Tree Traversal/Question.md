Vertical Tree Traversal

Difficulty: MediumAccuracy: 32.87%Submissions: 213K+Points: 4Average Time: 45m
Given a root of a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.

Examples:

Input: root[] = [1, 2, 3, 4, 5, 6, 7, N, N, N, N, N, 8, N, 9]
     Vertical-Taversal-          
Output: [[4], [2], [1, 5, 6], [3, 8], [7], [9]]
Explanation: The below image shows the horizontal distances used to print vertical traversal starting from the leftmost level to the rightmost level.
     
Input: root[] = [1, 2, 3, 4, 5, N, 6]
     
Output: [[4], [2], [1, 5], [3], [6]]
Explanation: From left to right the vertical order will be [[4], [2], [1, 5], [3], [6]]
Constraints:
1 <= number of nodes <= 105
1 <= node->data <= 105