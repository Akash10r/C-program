#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%8==1)
        printf("Thumb");
    else if(n%8==5)
        printf("Little");
    else if(n%8==2 || n%8==0)
        printf("Index");
    else if(n%8==3 || n%8==7)
        printf("Middle");
    else
        printf("Ring");
return 0;

}
