#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int prime=0,x=1;
    for(int i=a+1;i<b;i++)
    {
        x=1;
        for(int k=2;k<=i/2;k++)
        {
            if(i%k==0)
            {
                x=0;
                break;
            }
        }
    if(x==1 && i>prime)
        prime=i;
    }
    printf("%d",prime);
    return 0;
}

