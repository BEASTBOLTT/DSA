#include <map>
/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

Node *removeLoop(Node *head)
{
    if(head == NULL){
        return NULL;
    }
    map<Node* , bool> visited;

    Node* temp = head;
    while(temp != NULL){
        visited[temp] = true;
        if(visited[temp->next] == true){
            temp->next = NULL;
            break;
        }
        temp = temp->next;
        
    }
    return head;
}