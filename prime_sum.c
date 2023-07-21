#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int c=1;
    for(int i=1;i<n/2;i++)
    {
        if(i<=5){
        if(i==2 || i==3 || i==5)
        {
            c++;
            n=n-i;
        }
        }
        else
        {
            if(i%2!=0 && i%3!=0 && i%5!=0)
            {
                c++;
                n=n-i;
            }
        }
    }
    printf("%d\n",c);
}
