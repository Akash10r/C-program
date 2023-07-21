#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c;
    gets(str);
    int i,l=0;
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z') || (str[i]>='0'&&str[i]<='9'))
        {
            c=str[i];
            str[i]=str[l-i-1];
            str[l-i-1]=c;
        }

    }
    printf("%s",str);
    return 0;
}
