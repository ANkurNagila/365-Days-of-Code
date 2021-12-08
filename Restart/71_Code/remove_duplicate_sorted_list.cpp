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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL or head->next==NULL)
        {
            return head;            
        }
        
        ListNode *temp=head;
        ListNode *prev=head;
        
        temp=temp->next;
        
        while(temp->next!=NULL)
        {
            if(temp->val!=prev->val)
            {
                prev->next=temp;
                prev=temp;
            }
            temp=temp->next;
        }
        if(temp->val!=prev->val)
            {
                prev->next=temp;
                prev=temp;
        }
        else
        {
            prev->next=NULL;
        }
        
        return head;
    }
};
