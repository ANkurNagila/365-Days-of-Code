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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *tmp1=l1;
        ListNode *tmp2=l2;
        
        ListNode *head;
        ListNode *ans;
        
        if(tmp1==NULL and tmp2==NULL)
        {
            return head;
        }
        else if(tmp1==NULL and tmp2!=NULL)
        {
            return tmp2;
        }
        else if(tmp1!=NULL and tmp2==NULL)
        {
            return tmp1;
        }
        else
        {
            if(tmp1->val <= tmp2->val)
                {
                    ListNode *tmp=new ListNode;
                    tmp->val=tmp1->val;
                    ans=tmp;
                    head=ans;
                    tmp1=tmp1->next;
                }
                else
                {
                    ListNode *tmp=new ListNode;
                    tmp->val=tmp2->val;
                    ans=tmp2;
                    head=ans;
                    tmp2=tmp2->next;
                }


                while(tmp1!=NULL and tmp2!=NULL)
                {
                    if(tmp1->val <= tmp2->val)
                    {
                        ListNode *tmp=new ListNode;
                        tmp->val=tmp1->val;
                        tmp->next=NULL;
                        ans->next=tmp;
                        ans=ans->next;
                        tmp1=tmp1->next;
                    }
                    else
                    {
                        cout<<"tmp 2"<<" ";
                        ListNode *tmp=new ListNode;
                        tmp->val=tmp2->val;
                        tmp->next=NULL;
                        ans->next=tmp;
                        ans=ans->next;
                        tmp2=tmp2->next;
                    }
                }

                if(tmp1!=NULL)
                {
                    while(tmp1!=NULL)
                    {
                        ListNode *tmp=new ListNode;
                        tmp->val=tmp1->val;
                        tmp->next=NULL;
                        ans->next=tmp;
                        ans=ans->next;
                        tmp1=tmp1->next;
                    }

                }
                else
                {
                    while(tmp2!=NULL)
                    {
                        ListNode *tmp=new ListNode;
                        tmp->val=tmp2->val;
                        tmp->next=NULL;
                        ans->next=tmp;
                        ans=ans->next;
                        tmp2=tmp2->next;
                    }
                }

                return head;
            }
            
        }
        
};
