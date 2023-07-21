#include<stdio.h>
int main()
{
    int i,n,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<17)
            t=t+200;
        else if(a[i]>17 || a[i]<40)
            t=t+400;
        else if(a[i]>40)
            t=t+300;
    }
    printf("Total income %d INR",t);
    return 0;
}
