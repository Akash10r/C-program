#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;


}
