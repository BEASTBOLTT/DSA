/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    
    if (head->next == NULL){
        return head;
    }
    int len = 1;
    Node * temp = head;
    while(temp ->next != NULL){
        len++;
        temp = temp->next;
    }
    int mid;
    if (len%2 == 0){
        mid = len/2 +1;
    }
    else{
        mid = len/2;
    }
    
    for(int i = 0; i < mid; i++){
        head = head->next;
    }
    return head;
}

