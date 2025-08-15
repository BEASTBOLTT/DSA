/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        Node *temp = head;
        vector<int> check;
        while(temp != NULL){
            check.push_back(temp->data);
            temp = temp->next;
        }
        int i = 0;
        int j = check.size()-1;
        while (i<j){
            if(check[i] == check[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};