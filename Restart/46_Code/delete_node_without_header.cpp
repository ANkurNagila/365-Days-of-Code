#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    struct Node* next;
};
 
void deleteNode(Node *del)
{
        Node *temp=del->next;
        
        del->data=temp->data;
        del->next=temp->next;
        
        free(temp);
        
       // Your code here
}

void print(Node* head)
{
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
 
    cout << "NULL";
}
 
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
// Driver Code
int main()
{
    struct Node* head = NULL;
 
    // create linked 35->15->4->20
    
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);
    cout << "Initial Linked List: \n";
    print(head);
    cout << endl << endl;
 
    Node* del = head->next;
    deleteNode(del);
 
    cout << "Final Linked List after deletion of 15:\n";
    print(head);
 
    return 0;
 
}
