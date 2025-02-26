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
    int pairSum(ListNode* head) {
       ListNode* fast=head;ListNode*slow=head; 
       while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
       }
       ListNode* prev=nullptr;ListNode* curr=slow;
       while(curr){
        ListNode* nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
       }
       int maxTwin=0;
        ListNode* First=head;ListNode* second=prev;
        while(second){
            maxTwin=max(maxTwin,First->val+second->val);
            First=First->next;
            second=second->next;
        }
        return maxTwin;
    }
};