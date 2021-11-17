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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        
        ListNode *tmp1=head;
        ListNode *tmp2=head;
        ListNode *prev,*prev2;
        int mid=1;
               
        
            while(tmp2!=NULL and tmp2->next!=NULL)
            {
                prev=tmp1;
                prev2=tmp2;
                tmp1=tmp1->next;
                tmp2=tmp2->next->next;
                mid++;
            }
     
        
        cout<<mid<<endl;
        
        int steps1;
        int steps2;
        
        if(prev2->next!=NULL and prev2->next->next==NULL)
        {
            cout<<"YES"<<endl;
            if(k>mid)
            {
                steps2=k;
                steps1=(mid-1)-(k-mid);
            }
            else
            {
                steps1=k;
                steps2=((mid-1)-k)+mid;                
            }
        }
        else
        {
            if(mid==k)
                return head;
            
            else if(mid>k)
            {
                steps1=k;
                steps2=(mid-k)+mid;
            }
            else
            {
                steps2=k;
                steps1=mid-(k-mid);                
            }
        }
        
        int step3=1;
        ListNode *tmp3=head;
        
        cout<<steps1<<" "<<steps2<<endl;
        if(steps1>steps2)
        {
            int t=steps1;
            steps1=steps2;
            steps2=t;
        }
            
        
        while(step3<steps1)
        {
            tmp3=tmp3->next;
            step3++;
        }
        
        while(mid<steps2)
        {
            tmp1=tmp1->next;
            mid++;
        }
        
        int temp=tmp1->val;
        tmp1->val=tmp3->val;
        tmp3->val=temp;
        
        return head;
        
    }
};
