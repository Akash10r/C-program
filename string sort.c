#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    int min,t;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }

            if (i!=min)
            {
                t= a[i];
                a[i]=a[min];
                a[min]=t;
            }


    }
    for(i=0;i<n;i++)
    {
        printf("%s ",a[i]);
    }

}














