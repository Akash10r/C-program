#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int *p;
    p=&a;
    printf("%d %d %d %d %d\n",a,*p,p,&a,*&a);
    int *q;
    q=p;
    printf("%d %d ",*p,*q);
    return 0;
}
