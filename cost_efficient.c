#include<stdio.h>
int main()
{
    int a1,b1,c1,d1,e1;
    int a2,b2,c2,d2,e2;
    scanf("%d\n",&a1);
    scanf("%d\n",&b1);
    scanf("%d\n",&c1);
    scanf("%d\n",&d1);
    scanf("%d\n",&e1);
    scanf("%d\n",&a2);
    scanf("%d\n",&b2);
    scanf("%d\n",&c2);
    scanf("%d\n",&d2);
    scanf("%d\n",&e2);
    double p=c1+(d1/a1*b1)*60+(e1*60);
    double d=c2+(d2/a2*b2)*60+(e2*60);
    if(p<d)
        printf("PETROL");
    else
        printf("DIESEL");
    return 0;
}
