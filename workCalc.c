#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("(%d,",arr[i]);
        printf("%d),",arr2[i]);
    }
    return 0;
}
