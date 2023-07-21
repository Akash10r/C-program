#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int a[n];

    scanf("%d",&n);
    scanf("%d",&a[n]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return 0;
}
