#include<stdio.h>
int main()
{
    int district;
    char letter[3];
    int digit;
    scanf("%d",&district);
    scanf("%s",letter);
    scanf("%d",&digit);
    int total=(26*district*(letter[1]-letter[0]+1)*10000);
    int special=0;
    for(int i=0;i<10;i++)
    {
        if(digit==(i)||digit==(i*10+i)||digit==(i+i*10))
        {
            special=10;
            break;
        }
    }
    total-=special;
    printf("%d\n",total);
    return 0;
}
