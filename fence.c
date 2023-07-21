#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the number of fences:");
    scanf("%d",&n);
    printf("Enter the number of colors:");
    scanf("%d",&k);
    int total;
    if(n==1)
    {
        printf("%d",k);
    }
    else
    {
    if(((n-1)== n ==(n+1))!=k)
    {
        for(int i=1;i<=n;i++)
        {
            total=n*(n-1);
        }
    }
    printf("%d",total);
    }
return 0;
}
