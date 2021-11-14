#include<iostream>
#include<cstdio>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};


int getMiddle(Node *head)
{
        Node *tmp1=head;
        Node *tmp2=head;
        
        while(tmp2!=NULL and tmp2->next!=NULL)
        {
            tmp1=tmp1->next;
            tmp2=tmp2->next->next;
        }
        
        return tmp1->data;
}

void push(struct node** head_ref, int new_data)
{
     
    struct node* new_node = (struct node*)malloc(
        sizeof(struct node));
 
    new_node->data = new_data;
 
    new_node->next = (*head_ref);
 
    (*head_ref) = new_node;
}
 
void printList(struct node* ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
 
int main()
{
     
    struct node* head = NULL;
    int i;
 
    for(i = 5; i > 0; i--)
    {
        push(&head, i);
        printList(head);
        int ans=getMiddle(head);
        cout<<ans<<endl;
    }
    return 0;
}
