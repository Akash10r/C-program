#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    for(int i=1;i<=n;i++,printf("\n"))
    {
        for(int j=1;j<=n;j++)
        if(j==n/2+1||i==n/2+1)
            printf("0 ");
        else
            printf("1 ");
    }
    else
    {
        for(int i=1;i<=n;i++,printf("\n"))
    {
        for(int j=1;j<=n;j++)
        if(j==n/2||i==n/2)
            printf("0 ");
        else
            printf("1 ");
    }
    }
}
