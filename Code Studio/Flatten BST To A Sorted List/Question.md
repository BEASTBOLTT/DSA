Problem statement
You have been given a Binary Search Tree (BST). Your task is to flatten the given BST to a sorted list. More formally, you have to make a right-skewed BST from the given BST, i.e., the left child of all the nodes must be NULL, and the value at the right child must be greater than the current node.

A binary search tree (BST), also called an ordered or sorted binary tree, is a rooted binary tree whose internal nodes each store a value greater than all the values in the node's left subtree and less than those in its right subtree.

Follow Up :
Can you solve this in O(N) time and O(H)  space complexity?
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100
1 <= N <= 5000
0 <= node.data <= 10^9, (where node data != -1)

Where 'N' denotes the number of nodes in the given tree.

Time Limit: 1 second
Sample Input 1
2
10 6 12 2 8 11 15 -1 -1 -1 -1 -1 -1 -1 -1
5 -5 8 -1 -1 -1 -1
Sample Output 1
2 -1 6 -1 8 -1 10 -1 11 -1 12 -1 15 -1 -1
-5 -1 5 -1 8 -1 -1
Explanation for Sample Input 1
For the first test case, the given BST is depicted below.

So, after flattening, the BST is transposed as the below figure.


For the second test case, the given BST is depicted below.

So, after flattening, the BST is transposed as the below figure.


Sample Input 2
2
5 3 7 -1 -1 6 8 -1 -1 -1 -1
2 1 -1 -1 -1
Sample output 2
3 -1 5 -1 6 -1 7 -1 8 -1 -1
1 -1 2 -1 -1