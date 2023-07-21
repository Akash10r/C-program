#include<stdio.h>
int main()
{
    int n,k,j,m,p;
    scanf("%d",&n);//monkey
    scanf("%d",&k);//banana by 1
    scanf("%d",&j);//peanut by 1
    scanf("%d",&m);//banana
    scanf("%d",&p);//peanut
    int x,y;
    x=m/k;
    y=p/j;
    int t=x+y;
    printf("Number of monkeys left on the tree: %d",(n-t));
    return 0;
}
