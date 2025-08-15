/*
class Node {
    public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

*/

class Solution {
    private:
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
  public:
    Node *cloneLinkedList(Node *head) {
        
        Node * cloneHead = NULL;
        Node * cloneTail = NULL;
        
        Node * temp = head;
        while(temp != NULL){
            insert(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        unordered_map<Node*, Node*> oldToNew;
        
        temp = head;
        Node* temp2 = cloneHead;
        
        while(temp != NULL){
            oldToNew[temp] = temp2;
            temp = temp->next;
            temp2 = temp2->next;
        }
        
        temp = head;
        temp2 = cloneHead;
        while(temp2 != NULL){
            temp2->random = oldToNew[temp->random];
            temp = temp->next;
            temp2 = temp2->next;
        }
        return cloneHead;
    }
};