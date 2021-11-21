class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        long long int sum=0;
        sum=head->val;
        head=head->next;
        
        while(head!=NULL)
        {
            sum=2*sum +head->val;
            head=head->next;
        }
        
        return sum;
        
    }
};
