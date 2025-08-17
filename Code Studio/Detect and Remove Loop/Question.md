Detect and Remove Loop

Problem statement
Given a singly linked list, you have to detect the loop and remove the loop from the linked list, if present. You have to make changes in the given linked list itself and return the updated linked list.

Expected Complexity: Try doing it in O(n) time complexity and O(1) space complexity. Here, n is the number of nodes in the linked list.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 100000.
1 <= ‘VAL’ <= 1000 .  

Time limit: 1 sec
Sample Input:
6 2
1 2 3 4 5 6 
Sample Output:
1 2 3 4 5 6
Explanation:
For the given input linked list, the last node is connected to the second node as:

Now, after detecting and removing this loop the linked list will be:
