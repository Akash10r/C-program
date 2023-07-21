#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int num=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<a[n-1])
        {
            num=a[i];
        }
        else
        {
            num=a[n-1];
        }
    }
    int val=num*(n-2);
    printf("%d",val);
}


