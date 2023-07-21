#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);
    int x= factorial(n);
    printf("Factorial of %d is: %d", n,x);
    return 0;
}
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
