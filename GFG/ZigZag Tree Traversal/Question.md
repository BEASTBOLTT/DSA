ZigZag Tree Traversal


Difficulty: MediumAccuracy: 54.05%Submissions: 181K+Points: 4Average Time: 30m
Given a binary tree with n nodes. You have to find the zig-zag level order traversal of the binary tree.
Note: In zig zag traversal starting from the first level go from left to right for odd-numbered levels and right to left for even-numbered levels.

Examples:

Input: root = [1, 2, 3, 4, 5, 6, 7]
          
Output: [1, 3, 2, 4, 5, 6, 7]
Explanation: For level 1 going left to right, we get traversal as [1]. For level 2 going right to left, we get traversal as [3,2].For level 3 going left to right, we get traversal as [4,5,6,7]. Merging all this traversals in single array we get [1,3,2,4,5,6,7].
Input: root = [7, 9, 7, 8, 8, 6, N, 10, 9]
 
Output: [7, 7, 9, 8, 8, 6, 9, 10] 
Explanation: For level 1 going left to right, we get traversal as [7]. For level 2 going right to left, we get traversal as [7,9]. For level 3 going left to right, we get traversal as [8,8,6]. For level 4 going right to left, we get traversal as [9,10]. Merging all this traversals in single array we get [7,7,9,8,8,6,9,10].
Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 105