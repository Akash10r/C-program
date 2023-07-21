#include<stdio.h>
int main()
{
    int n,i,t,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0 && t<=a[j])
        {
            a[j+1]=a[j];
            a[j]=t;
            j--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}
