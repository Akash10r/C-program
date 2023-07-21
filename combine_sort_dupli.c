#include<stdio.h>
int main()
{
    int a,b;
    printf("enter array 1 size:");
    scanf("%d",&a);
    printf("enter array 1:\n");
    int arr1[a];
    int i,j;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter array 2 size:");
    scanf("%d",&b);
    printf("enter array 2:\n");
    int arr2[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&arr2[i]);
    }
    //combine//
    j=0;
    for(i=a;i<a+b;i++)
    {
        arr1[i]=arr2[j];
        j++;
    }

    for(i=0;i<a+b;i++)
    {
        printf("%d\t",arr1[i]);
    }
    //sort//
    int temp;
    for(i=0;i<a+b;i++)
    {
        for(j=i+1;j<a+b;j++)
        {
            if(arr1[i]>arr1[j])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    printf("sorted array:\n");
    for(i=0;i<a+b;i++)
    {
        printf("%d\t\n",arr1[i]);
    }
    //duplicate//
    for(i=0;i<a+b;i++)
    {
        for(j=i+1;j<a+b;j++)
        {
            if(arr1[i]==arr1[j])
            {
                arr1[j]=0;
            }

        }
    }

        for(j=0;j<a+b;j++)
        {



            if(arr1[j]!=0)
            {
                printf("%d",arr1[j]);
            }
        }



    return 0;
}
