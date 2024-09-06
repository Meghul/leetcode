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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>numset(nums.begin(),nums.end());
        ListNode* temp= new ListNode(0);
        temp->next=head;
        ListNode* prev=temp;
        ListNode* curr=head;

        while(curr!=nullptr){
            if(numset.find(curr->val)!=numset.end()){
                prev->next=curr->next;
            }
            else{
                prev=curr;
            }
            curr=curr->next;
        }
        return temp->next;
        }
        
    
};