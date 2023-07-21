#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char s[n];
    char goal[n];
    scanf("%s",&s);
    scanf("%s",&goal);
    char s1[n];
    printf(strrev(goal));
    if(s==s1)
        printf("\nTrue");
    else
        printf("\nFalse");
return 0;
}
