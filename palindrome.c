#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode;
int main()
{
    int n,i,null=0,count=0;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0 ; i<n ;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=null;
        if(head == null)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next=newnode;
            temp = newnode;
            temp->next=head;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
