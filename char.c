#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);

    int i,x;
    for(i=0;str[i]!='\0';i++)
    {
        if(i==0&&str[i]!=' '||str[i]!=' '&&str[i-1]==' ')
        {
            if(str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32;
            else if(str[i]>='A' && str[i]<='Z')
                 str[i]=str[i]+32;
        }
        int x=strlen(str);
        if(i==x-1&&str[i]!=' '||str[i]!=' '&&str[i+1]==' ')
        {
            if(str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32;
            else if(str[i]>='A' && str[i]<='Z')
                 str[i]=str[i]+32;
        }
    }
    puts(str);
    return 0;
}
