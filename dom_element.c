#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:");
    scanf("%d",&n);
    int a[n],i;
    int count = 0,dom;
    printf("Enter Array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(count==0)
        {
            dom=a[i];
            count=1;
        }
        else if(a[i]==dom)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    printf("Dominant Element: %d",dom);
}
