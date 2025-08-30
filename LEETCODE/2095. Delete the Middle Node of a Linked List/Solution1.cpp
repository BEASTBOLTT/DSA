/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == NULL){
            return NULL;
        }
        int len = 1;
        ListNode* temp = head;
        while(temp ->next != NULL){
            len++;
            temp = temp->next;
        }
        int mid;
        if (len/2 == 0){
            mid = len/2 +1;
        }
        else{
            mid = len/2;
        }
        temp = head;
        ListNode * curr = temp;
        for(int i = 0; i < mid; i++){
            curr = temp;
            temp = temp->next;
        }
        curr->next = temp->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
};