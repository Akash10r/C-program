#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int space;
    for(i=1;i<=n;i++)
    {
        for(space=0;space<n-i;space++)
            {
                printf(" ");

            }
    for(j=1;j<=i;j++)
        {
            printf("* ");
        }



        printf("\n");
    }
    return 0;
}


