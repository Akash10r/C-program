#include<stdio.h>
int main()
{
    int n,i,j,count,k=0;
    scanf("%d",&n);
    int b[n];
    for(i=1;i<=n;i++)
    {
        for(j=2;j<=n/2;j++)
        {
            if(i%j==0)
            {
                count=1;

            }
            if(count!=1)
            {
                b[k]=1;
                k++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        int sum=sum+b[i];
        if(sum==n)
            break;
        else
            count++;
    }
    printf("%d",count);
return 0;
}
