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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL ) {
            return head;
        }
        if(head ->next == NULL){
            if(head->val == val){
                return NULL;
            }
            return head;
        }
        while(head->val == val && head->next != NULL){
            if(head->val == val){
                head = head->next;
            }
        }
        
        ListNode* prev = new ListNode(-1);
        prev->next = Ahead;
        ListNode* cur = head;
        while(prev->next != NULL){
            if(cur->val==val){
                cur = cur->next;
                prev->next = cur;
            }
            else{
                prev = cur;
                cur = cur->next;
            }
        }
        if(prev->val == -1){
            return NULL;
        }
        return head;
    }
};