#include<stdio.h>
int main()
{
    int a,i,sum=0,sum1=0,sub;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a-1;i++)
    {
        scanf("%d",&arr[i]);
        sum1=sum1+arr[i];
    }
    for(i=1;i<=a;i++)
    {
        sum=sum+i;

    }
    sub=sum-sum1;
    printf("%d",sub);
    return 0;


}
