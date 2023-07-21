#include<stdio.h>
int main()
{
    int n,m,p;
    scanf("%d %d %d",&n,&m,&p);
    int ans,res;
    if(n>0&&m>0&&p>0)
    {
        ans=(n*p)+m;
        res=p;
    }
    printf("%d\n",ans);
    printf("%d",res);
}
