#include<stdio.h>
int main()
{
    int n,m,r;
    scanf("%d %d %d ",&n,&m,&r);
    int in[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&in[i]);
    }
    int out[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&out[i]);
    }
    int in_sum=0;
    for(int i=0;i<n;i++)
        in_sum=in_sum+in[i]-r;
    int out_sum=0;
    for(int i=0;i<m;i++)
        out_sum=out_sum+out[i]-r;
    if(in_sum==out_sum)
        printf("BALANCED");
    else
        printf("NOT BALANCED");
    return 0;
}
