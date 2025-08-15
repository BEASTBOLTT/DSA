Add Number Linked Lists


Given head of two singly linked lists head1 and head2 representing two non-negative integers. The task is to return the head of the linked list representing the sum of these two numbers.

Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

Examples:

Input: head1 = 4 -> 5, head2 = 3 -> 4 -> 5
Output:  3 9 0
Explanation: Given numbers are 45 and 345. There sum is 390.


Input: head1 = 0 -> 0 -> 6 -> 3, head2 = 0 -> 7 
Output: 7 0 
Explanation: Given numbers are 63 and 7. There sum is 70.

Constraints:
1 ≤ list1.size, list2.size ≤ 5*105
0 ≤ node->data ≤ 9