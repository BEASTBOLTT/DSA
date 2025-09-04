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
private:
    int twinSum(ListNode* &head , int s, int e){
        int sum = 0;
        ListNode* temp = head;
        for(int i = 0; i < e; i++){
            if(i == s){
                sum += temp->val;
            }
            temp = temp->next;
        }
        sum += temp->val;
        return sum;
    }
public:
    int pairSum(ListNode* head) {
        int n = 1;
        ListNode* temp = head;
        while(temp->next != NULL){
            n++;
            temp = temp->next;
        }
        int ans = INT_MIN;
        for(int i = 0; i <= (n/2)-1; i++){
            int sum = twinSum(head, i, n-1-i);
            ans = max(ans, sum);
        }

        return ans;
    }
};