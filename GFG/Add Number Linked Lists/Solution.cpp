#include <cmath>

/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
    private:
    Node* reverse(Node* head){
        
        Node* cur = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    
    void insert(Node* &head, Node * &tail, int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
            return;
        }
    }
    
    Node* add(Node* h1, Node * h2){
        Node* head = NULL;
        Node* tail = NULL;
        int carry = 0;
        while(h1 != NULL && h2 != NULL){
            int sum = h1->data + h2->data + carry;
            insert(head, tail, sum%10);
            carry = sum/10;
            h1 = h1->next;
            h2 = h2->next;
            
        }
        while(h1 != NULL){
            int sum = h1->data + carry;
            insert(head, tail, sum%10);
            carry = sum/10;
            h1 = h1->next;
        }
        while(h2 != NULL){
            int sum = h2->data + carry;
            insert(head, tail, sum%10);
            carry = sum/10;
            h2 = h2->next;
        }
        while(carry != 0){
            int sum = carry;
            insert(head, tail, sum%10);
            carry = sum/10;
        }
        return head;
    }
    public:
    Node* addTwoLists(Node* head1, Node* head2) {
        if(head1 == NULL){
            return head2;
        }
        if(head2== NULL){
            return head1;
        }
        while(head1->data == 0){
            head1 = head1->next;
        }
        while(head2->data == 0){
            head2 = head2->next;
        }
        Node* h1 = reverse(head1);
        Node* h2 = reverse(head2);
    
        Node* ans = add(h1, h2);
        
        ans = reverse(ans);
        
        
        return ans;
    }
};