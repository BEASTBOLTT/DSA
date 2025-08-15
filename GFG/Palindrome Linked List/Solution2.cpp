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
    private:
        Node* middle(Node* head){
            Node* slow = head;
            Node* fast = head->next;
            while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }
        Node* reverse(Node* head){
            Node* cur = head;
            Node* prev = NULL;
            Node* next = NULL;
            while(cur !=NULL){
                next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = next;
            }
            return prev;
        }
  public:
    bool isPalindrome(Node *head) {
        if(head->next == NULL){
            return true;
        }
        Node* mid = middle(head);
        mid->next = reverse(mid->next);
        
        Node* h1 = head;
        Node* h2 = mid->next;
        
        while(h2 != NULL){
            if(h1->data == h2->data){
                h1 = h1->next;
                h2 = h2->next;
            }
            else{
                return false;
            }
        }
        mid->next = reverse(mid->next);
        
        return true;
    }
};