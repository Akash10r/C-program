#include<stdio.h>
int main()
{
    int i,n,t,j;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array elements :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    j=0;
    t=n-1;
    printf("The MIN - MAX sorted Array is :\n");
    for(i=0; i<n; i++)
    {
        if(i%2!=0)
        {
            printf("%d ",a[j] );
            j++;
        }
        else
        {
            printf("%d ",a[t] );
            t--;
        }
    }

    return 0;

}
