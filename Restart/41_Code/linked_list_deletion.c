#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

int insert(int data,int n)
{
    struct Node *tmp;
    tmp=(struct Node *)malloc(sizeof(struct Node));

    tmp->data=data;
    tmp->next=NULL;

    if(n==1)
    {
        tmp->next=head;
        head=tmp;
    }

    struct Node *tmp2;
    tmp2=head;

    for(int i=0;i<n-2;i++)
    {
        tmp2=tmp2->next;
    }
    //break n-2;
    //Actually n=n-1;

    tmp->next=tmp2->next;
    tmp2->next=tmp;
}

int deletion(n)
{
    struct Node *tmp=head;

    if(n==1)
    {
        head=tmp->next;
        free(tmp);
        return;
    }

    int i;
    for(i=0;i<n-2;i++)
    {
        tmp=tmp->next;
    }

    struct Node *tmp2=tmp->next;
    tmp->next=tmp2->next;

    free(tmp2);
}

void print(int n)
{
    struct Node *tmp=head;

    for(int i=0;i<n;i++)
    {
        printf("%d ",tmp->data);
        tmp=tmp->next;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        insert(i,i);
    }

    deletion(n);
    n=n-1;
    print(n);
}
