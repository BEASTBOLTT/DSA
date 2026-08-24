Problem statement
Given 'k' sorted linked lists, each list is sorted in increasing order. You need to merge all these lists into one single sorted list. You need to return the head of the final linked list.



For example:
Input:
3
3
4 6 8
3
2 5 7 
2
1 9

Output:
1 2 4 5 6 7 8 9 

Explanation:
First list is: 4 -> 6 -> 8 -> NULL
Second list is: 2 -> 5 -> 7 -> NULL
Third list is: 1 -> 9 -> NULL
The final list would be: 1 -> 2 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> NULL
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
2
2
2 6 
2
-5 7 
Sample Output 1:
-5 2 6 7
Explanation for input 1:
First list is: 2 -> 6 -> NULL
Second list is: -5 -> 7 -> NULL
The final list would be: -5 -> 2 -> 6 -> 7 -> NULL
Sample Input 2:
2
3
8 9 11 
2
1 2 
Sample output 2:
1 2 8 9 11 
Constraints:
1 <= 'k' <= 10 ^ 3
1 <= 'n' <= 100
-10 ^ 9  <= 'data' <=  10 ^ 9 

where 'n' is the size of the list.
Time limit: 1 sec.