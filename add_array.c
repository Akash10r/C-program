#include<stdio.h>
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }//
    for(i=n-1;i<=n;i--)
    {
        temp=temp*10+a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);

    }
return 0;
}
