#include <stdio.h>
int main()
{
    int n,jump = 0;
    scanf("%d",&n);
    while (n > 0)
    {
        if (n%2==0)
        {
            n/=2;
        }
        else
        {
            n--;
        }
        jump++;
    }
    printf("Number of jumps: %d\n",jump);
    return 0;
}
