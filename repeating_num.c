#include<stdio.h>
void main()
{
    int len,i,j,temp,b[50];
    printf("enter length of array : ");
    scanf("%d",&len);
    int arr[len],o[len];
    for(i = 0;i < len;i++)
    {
        printf("array element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i = 0;i < len;i++)
    {
        for(j = i+1;j < len;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ",arr[j]);
            }
        }
    }
}
