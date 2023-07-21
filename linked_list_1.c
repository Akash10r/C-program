#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*new,*head=NULL,*temp=NULL;
void create()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
         new = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
            temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
        }
    }
}
void skip()
{

        int x;
        scanf("%d",&x);
        temp=head;
        for(int i=1;i<x;i++)
        {
            temp=temp->next;
        }
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }

}
int main()
{
   create();
   skip();
}
