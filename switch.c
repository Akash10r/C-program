#include<stdio.h>
#define max 15
int a[max],num;
void create()
{
    int i;
    printf("enter a num:");
    scanf("%d",&num);
    printf("Enter Array Elements:\t");
    for(i=0;i<num;i++)
    {
        scanf("&d",&a[i]);
    }
}
void display()
{
    create();
    int i;
    printf("Array elements are:");
    for(i=0;i<num;i++)
    {
        printf("%d",a[i]);
    }
}
void insert()
{
    create();
    int pos,val;
    printf("enter the position:");
    scanf("%d",&pos);
    printf("Enter the value to insert:");
    scanf("%d",&val);
    num=num+1;
    for(int i=num;i<pos-1;i--)
    {
        a[i]=a[i-1];
        a[val]=a[val-1];
        a[pos-1]=val;
    }
}
void delete_array()
{
    create();
    int posi,i;
    printf("position of the array element to delete: \n ");
    scanf ("%d",&posi);
    if (posi>=num+1)
    {
        printf ("\nDeletion is not possible");
    }
    else
    {
        for (i = posi - 1; i < num -1; i++)
        {
            a[i] = a[i+1];
        }

        printf ("\nResultant array:",a[i]);

}
}
void search()
{
   create();
   int element,num,i;
   printf("Enter element to search: ");
   scanf("%d",&element);

   for(i=0; i<num; i++)
   {
     if(a[i]==element)
     {
       printf("%d found at position %d", element, i+1);

     }
   }
}
int main()
{
    int n;
    printf("1.create 2.insert 3.delete 4.search 5.display ");
    printf("\nenter a num from 1-6:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            create();
            break;

        case 2:
            insert();
            break;

        case 3:
            delete_array();
            break;

        case 4:
            search();
            break;

        case 5:
            display();
            break;

        default:
            break;
    }
    return 0;
}

