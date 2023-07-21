#include<stdio.h>
int main()
{
    int n,i,id;
    scanf("%d",&n);
    int n1=1,n2=1;
    for(i=3;i<=n;i++)
    {
        id=n1+n2;
        n1=n2;
        n2=id;
    }
    printf("lucky customer id:%d",id);
    return 0;
}
