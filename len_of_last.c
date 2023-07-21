#include <stdio.h>
int main()
{
    char a[100];
    int l,last;
    printf("Enter any string: ");
    gets(a);
    l=strlen(a);
    last=0;
    for(int i=l-1;i>=0;i--)
    {
        if(a[i]==' ')
        {
            last=i+1;
            break;
        }
    }
    printf("The last word is \"");
    for(int i=last;i<l;i++)
    {
        printf("%c",a[i]);
    }
    printf("\" length is %d",l-last);
    return 0;
}
