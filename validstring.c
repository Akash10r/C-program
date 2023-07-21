#include <stdio.h>
#include <string.h>
int Validstring(char* a)
{
    int n=strlen(a);
    int b=0,s=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == '(')
        {
            b++;
        }
        else if(a[i] == '*')
        {
            s++;
        }
        else
        {
            if(b>0)
            {
                b--;
            }
            else if(s>0)
            {
                s--;
            }
            else
            {
                return 0;
            }
        }
    }
    if(b>s)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t!=0)
    {
        char a[1000];
        scanf("%s", a);
        int result = Validstring(a);
        if(result==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        t--;
    }
    return 0;
}
