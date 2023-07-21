#include<stdio.h>
int main()
{
    char str[50],camelcase[50];
    gets(str);
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(i==0)
        {
            toupper(str[0]);
        }
        if(str[i]==' ')
        {

           i++;
           camelcase[j]=str[i]-32;
        }
        else
        {
            camelcase[j]=str[i];
        }
        j++;
        i++;
    }
    puts(camelcase);
    return 0;
}
