/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
int getLength(Node*head,int k){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;

    }
    return cnt;

}
Node* kReverse(Node* head, int k) {
    if(head == NULL){
        return NULL;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int cnt = 0;

    while (curr !=NULL && cnt < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }
    if(next != NULL){
        if(getLength(next,k)>= k){
            head->next= kReverse(next,k);
        }
        else{
            head->next = next;
        }
    }

    return prev;
}