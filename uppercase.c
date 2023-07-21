#include<stdio.h>
int main()
{
    char s[100];
    int i=0;
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            s[i]=s[i]+32;
            i++;
        }
    }
    puts(s);
}
