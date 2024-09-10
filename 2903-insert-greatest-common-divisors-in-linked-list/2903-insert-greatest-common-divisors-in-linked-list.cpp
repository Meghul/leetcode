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

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
       if(head==nullptr||head->next==nullptr){
        return head;
       } 
       ListNode *node1=head;
       ListNode *node2=head->next;
       
      while(node2!=nullptr){
        int gcdval=calculategcd(node1->val,node2->val);
        ListNode *gcdnode=new ListNode(gcdval);
        node1->next=gcdnode;
        gcdnode->next=node2;

        node1=node2;
        node2=node2->next;
      }
      return head;
    }
    private:
int calculategcd(int a,int b){
    if(b==0){
        return a;
    }
    return calculategcd(b,a%b);
}
};