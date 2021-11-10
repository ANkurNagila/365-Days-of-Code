#include <bits/stdc++.h>
using namespace std;
 
struct Node
{
    int data;
    Node* next;
};

Node *removeDuplicates(Node *head)
{
    Node *temp=head;
    Node *after=(temp->next);
    
    while(temp!=NULL and after!=NULL)
    {
        if((temp->data)!=(after->data))
        {
            temp->next=after;
            temp=after;
            after=after->next;
        }
        else
        {
            after=after->next;
        }
    }
    
    if(after==NULL)
    {
        temp->next=NULL;
    }
    return head;
}

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);    
    (*head_ref) = new_node;
}
 
void printList(Node *node)
{
    while (node!=NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}
 
int main()
{
    Node* head = NULL;
     
    push(&head, 20);
    push(&head, 13);
    push(&head, 13);
    push(&head, 11);      ////Change input as you want
    push(&head, 11);
    push(&head, 11);                                    
 
    cout<<"Linked list before duplicate removal ";
    printList(head);
    head=removeDuplicates(head);
 
    cout<<"\nLinked list after duplicate removal ";    
    printList(head);            
     
    return 0;
}
 
